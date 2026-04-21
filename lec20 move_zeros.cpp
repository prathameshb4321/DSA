#include<iostream>
using namespace std;

#include<algorithm>

int main()
{
   int a[]={2,0,1,3,0,0,0};
   int n=7;
   // Method 1
  /* for(int i=0;i<n;i++)
   {

       for(int j=0;j<n-1-i;j++)
       {
        if(a[j]==0){
            swap(a[j],a[j+1]);
        }
       }
   }
   */
   //Method 2

   int i=0;
   for(int j=0;j<n;j++)
   {
       if(a[j]!=0){
           int x=a[i];
           a[i]=a[j];
           a[j]=x;
        i++;
       }
   }

   for(int k=0;k<n;k++)
   {
     cout<<a[k]<<" ";
   }

}
