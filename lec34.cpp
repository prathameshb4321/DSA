#include<iostream>
using namespace std;

string StringRev1(string s,int i,int j)
{
    cout<<"call recieved for "<<s<<endl;
    // base case
    if(i>j){
        return s;
    }

    swap(s[i],s[j]);
    i++;
    j--;
    return  StringRev1(s,i,j);

}

// or

void StringRev2(string& s,int i,int j)
{
    cout<<"call recieved for "<<s<<endl;
    // base case
    if(i>j){
        return ;
    }

    swap(s[i],s[j]);
    i++;
    j--;
    StringRev2(s,i,j);

}


bool checkPal(string&  s , int i,int j)
{
    // base case
    if(i>j){
        return true;
    }

    if(s[i]!=s[j]){
        return false;
    }
    else{
        checkPal(s,i+1,j-1);
    }



}

int powerfun(int a,int b){

     if(b==0){
        return 1;
     }
     if(b==1){
        return a;
     }

     int ans =1;

     if(b%2==0){
         int temp = powerfun(a,b/2)* powerfun(a,b/2);
         ans *= temp ;
     }
     else{
        int temp = a*powerfun(a,b/2)* powerfun(a,b/2);
        ans  *= temp ;

     }
     return ans;

}
void print(int arr[],int n)
{

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubble(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {

        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    print(arr,n);

}

void BubbleRecursion(int arr[] , int n,int i, int j)
{
   if(i==n-1){
    i=0;
    j=j+1 ;
   }

   if(j>=n-1 ){
    return ;
   }

   if(arr[i]>arr[i+1]){
    swap(arr[i],arr[i+1]);
   }
   BubbleRecursion(arr ,n ,i+1,j);



}
int main(){

// reverse string
     /*
        string s = "pratham";
        int i  =0;
        int j = s.size()-1;

      // method 1
        string rev = StringRev1(s,i,j);
        cout<<rev<<endl;
      // method 2
          StringRev2(s,i,j);
         cout<<s<<endl;
     */


  // Check Palindrom
       /*
       string str = "abcaba";

       bool val =  checkPal(str , 0 , str.length()-1);
       if(val){
        cout<<"yes palindrome";

       }
       else{
       cout<<"nahi be ja palindrome";
       }
       */
 // a power b
     /*
     int a = 3;
     int b = 10;

     int val = powerfun(a,b);
     cout<<"value of "<<a<<"power "<<b<<"is :"<<val;
     */
 // bubble sort
     int arr[] = {5,4,3,2,1};
     int n = 5;
     bubble(arr,n);
     //BubbleRecursion(arr ,n,0,0);
      print(arr,n);


}
