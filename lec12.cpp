#include<iostream>
using namespace std;

int binarys(int A[],int n,int key)
{
  int s=0;
  int e=n-1;

  int mid=s+(e-2)/2;
  while(s<=e)
  {
    if(A[mid]==key)
        return mid;
    if(A[mid]>key)
        e=mid-1;
    else
        s=mid+1;


  mid=s+(e-s)/2;
  }
  return -1;

}

int main()
{
    int A[100],n,key;
    cout<<"enter size ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
     cin>>A[i];
    }
    cout<<"enter key ";
    cin>>key;

    int p=binarys(A,n,key);
    if(p>=0)
        cout<<"at position:"<<p;
    else
        cout<<"not found";

 return 0;
}
