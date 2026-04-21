#include<iostream>
using namespace std;

bool isprime(int n)
{
  if(n<=1){
    return false;
  }
  for(int i=2;i<n;i++)
  {
      if(n%i==0){
        return false;
      }
  }
  return true;

}
int main()
{
 int n;
 for(int i =0 ;i<4;i++)
{
 cout<<"enter the no";
 cin>>n;



 if(isprime(n)){
    cout<<"\n is prime \n ";
 }
 else{
    cout<<"\n not prime \n";
 }
}
}
