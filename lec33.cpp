#include<iostream>
using namespace std;


bool issorted(int Size, int arr[] )
{
     // base condition
         if(Size==0 || Size==1)
        {
            return true;
        }

    // Recursive condition
    if(arr[Size-1] > arr[Size]){
        return false;
    }
    else{
    bool temp = issorted(Size -1,arr);
     return temp;


    }

}

int getSum(int Size , int arr[])
{
     // base case
      if(Size==0){
        return arr[0];
      }

      int remainPart = getSum(Size-1,arr);
     int total  =arr[Size]+remainPart;
    return total;
}

void print(int Size , int arr[])
{
   cout<<"Size of array :"<<Size<<endl;
   for(int i=0;i<Size;i++){
      cout<<arr[i]<<" ";
   }
   cout<<endl;
}



bool Linearsearch(int Size , int key , int arr[])
{
   print(Size, arr);
    if(Size<0 ){
        return false;
    }

    if( arr[0]==key){
        return true;
    }
    else{
      Linearsearch(Size-1,key , arr+1);
    }


}

void print(int arr[],int Start, int End)
{

   for(int i=Start;i<=End;i++){
      cout<<arr[i]<<" ";
   }
   cout<<endl;

}


bool BinarySearch(int arr[],int Start , int End,  int key)
{
   print(arr,Start,End);
   int mid = Start+(End-Start)/2;
   cout<<" Vlaue of arr mid :  "<<arr[mid]<<" \n\n";

   // base case
   if(Start > End){
        return false;
   }

   if(arr[mid] == key){
          return true;
   }


 // recursive relation
    if(arr[mid]<key){
       return  BinarySearch(arr, mid+1,End , key);
    }
    else{

        return BinarySearch(arr,Start, mid-1 , key);
    }


}

int main()
{
    // array is sorted
         /*
          int arr[100] = {2,4,6,9,11,13};
           int n = 5;
              bool ans =  issorted(n,arr);
            if(ans){
                cout<<"array is soretd";
            }
            else{
                cout<<"array is not sorted";
            }
            */


    // sum of array
         /*
         int arr[100] = {1,2,1,2,1,2};
          int n = 5;
          int ans = getSum(n,arr);
          cout<<"sum of array is :"<<ans;
          */


    // Linear search
        /*
        int arr[100] = {3,5,1,2,6};
          int Size = 5;
          int key = 2;
       bool ans = Linearsearch(Size , key ,arr);
        if(ans){
            cout<<"found ";
        }
        else{
            cout<<"not found";
        }
        */

    // Binary search
         int arr[] = {2 , 4 ,6 ,10 ,14 ,18};
         int End  = 5;
         int Start = 0;
         int key = 16;
         bool ans = BinarySearch(arr , Start , End ,key);
         if(ans){
            cout<<"element is there";
         }
         else{
            cout<<"element nahi be";
         }



}
