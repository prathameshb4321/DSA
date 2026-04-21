#include<iostream>
using namespace std;

int Merge(int A1[],int n,int A2[],int m,int A3[])
{
    int k=0;
    int i=0,j=0;
    while(i<n && j<m)
    {
      if(A1[i]<A2[j])
      {
         A3[k]=A1[i];
            i++;
            k++;
      }
      else{
        A3[k]=A2[j];
            j++;
            k++;
      }

    }
    while(i<n)
    {
       A3[k]=A1[i];
            i++;
            k++;
    }
    while(j<m)
    {
        A3[k]=A2[j];
            j++;
            k++;
    }

return k;
}

void print(int A3[],int k)
{

    for(int i=0;i<k;i++)
    {

        cout<<A3[i]<<" ";
    }
}



int main()
{
   int A1[]={1,3,5,7,9};
   int A2[]={2,4,6};

   int A3[8]={0};

   int k=Merge(A1,5,A2,3,A3);

   print(A3,k);


}
