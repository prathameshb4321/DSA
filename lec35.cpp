#include<iostream>
#include<vector>
using namespace std;


void Merge(int arr[],int s,int e)
{
    int mid = s+(e-s)/2;

   int n1 = mid-s+1;
   int n2 = e-mid;
   int arr1[100];
   int arr2[100];

   // copy values to 2 arrays
   int k =s;
   for(int i=0;i<n1;i++,k++){
      arr1[i]= arr[k];
   }

   for(int i =0;i<n2;i++,k++){
     arr2[i]=arr[k];
   }


   //  merge 2 arrays

   int i = 0;
   int j = 0;
   int v=s;
   while(i < n1 &&  j < n2){

     if(arr1[i]<arr2[j]){
          arr[v++] = arr1[i++];
     }
     else{
        arr[v++] = arr2[j++];
     }
   }

   while(i<n1){
     arr[v++] = arr1[i++];
   }
   while(j<n2){
     arr[v++] = arr2[j++];
   }




}

void MergeSort(int arr[],int s , int e)
{

    // base case
    if(s >= e){
        return ;
    }

    int mid = s+(e-s)/2;

    // left part sort kara
    MergeSort(arr,s,mid);


    // Right part sort kara
    MergeSort(arr,mid+1,e);

    // merge both part
    Merge(arr,s,e);


}

int main()
{
    int arr[15] = {2,4,3,6,5,8,7,9,10,14,12,16,22,18,20};
    int n =15;
    int s =0;
    int e = n-1;
    MergeSort(arr ,s ,e);

    for(int i=0;i<n;i++){
        cout << arr[i] <<" ";
    }


}
