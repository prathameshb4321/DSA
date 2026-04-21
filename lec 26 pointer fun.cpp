#include<iostream>
using namespace std;


void print(int *p)
{
    cout<<p<<endl;

}
void update(int *p){
*p=*p+1;
}


int GetSum(int *arr /*arr[] */,int n)
{   cout<<"\n size :"<<sizeof(arr)<<endl;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main()
{

cout<<" \n pointer in function: \n";
    int value = 5;
    int *p = &value;
   // print(k);

   cout<<"brfore"<<*p<<endl;
   update(p);
   cout<<"after:"<<*p;


    int arr[5]={1,2,3,4,5};

    cout<<"\n sum is :"<<GetSum(arr+3,2)<<endl;

}
