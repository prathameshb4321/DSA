#include<iostream>
using namespace std;

int& upd(int n)
{
    int a=10;
    int &ans = a;
    return ans;
}


int* fun(int n)
{
    int *ptr = &n;
    return ptr;

}
int main(){

int i=5;
// create a reference variable
int &j = i;
int k=i;
j++;
 cout<<i;

 cout<<j<<endl;
 cout<<&j<<endl<<&i<<endl<<&k;
 int n=5;
 cout<<endl<<upd(n);
 cout<<endl<<fun(n);
}
