//           2-D dynamic array
#include<iostream>
using namespace std;


int main(){

   int row,col;
   cout<<"enter row , col value";
   cin>>row>>col;

   int **arr = new int*[row];

   for(int i=0;i<row;i++)
   {
    arr[i]=new int[col];
   }
   // upto this array is created.


   // eneter values in array
  cout<<"Enter values "<<row <<col<<"for matrix "<<endl;
   for(int i=0;i<row;i++)
   {
      for(int j=0;j<col;j++)
       {
         cin>>arr[i][j];
       }
   }

   // dispaly values of array
    for(int i=0;i<row;i++)
   {
      for(int j=0;j<col;j++)
       {
        cout<<arr[i][j]<<" ";
       }
       cout<<endl;
   }
   // release heap memory
   // delete array from heap memory

   for(int i=0;i<row;i++)
   {
       delete [] arr[i];
   }
   delete []arr;


 /*                             code 2 JAGGRED ARRAY */
    // jaggered array dynamic memory

    cout<<"enter arr size for row in jaggered array row size ";
    int *A = new int[row];

   for(int i=0;i<row ;i++)
   {
       cin>>A[i];
   }

   for(int i=0;i<row;i++)
   {

    arr[i]=new int[A[i]];
   }
   // upto this array is created.
  cout<<"Enter values "<<row <<col<<"for matrix "<<endl;
   for(int i=0;i<row;i++)
   {
      for(int j=0;j<A[i];j++)
       {
         cin>>arr[i][j];
       }
   }

    for(int i=0;i<row;i++)
   {
      for(int j=0;j<A[i];j++)
       {
        cout<<arr[i][j]<<" ";
       }
       cout<<endl;
   }
   // release heap memory
   // delete array from heap memory

   for(int i=0;i<row;i++)
   {
       delete [] arr[i];
   }
   delete []arr;





}
