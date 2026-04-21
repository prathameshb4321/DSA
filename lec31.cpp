#include<iostream>
using namespace std;

/*
int factor(int n)
{

    if(n==0){
        return 1;
    }
    return n*factor(n-1);
}


*/
int factor(int n){

   // base case
   if(n==0){
    return 1;
   }
   int choti_problem = factor(n-1);
   int badi_problem = n*choti_problem;

   return badi_problem;


}


int power(int n)
{
    //base condition
    if(n==0){
        return 1;
    }
    int small =power(n-1);
    int big = 2*small;
    return big;

}

void print(int n)
{
     //base case
    if(n==0){
        return;
    }


    print(n-1);
      cout<<n<<" ";
}




int main()
{


  int n;
  cout<<"enter the no: ";
  cin>>n;

  //factorial
   /*
  int ans =factor(n);
  cout<<"\n the factorial of"<<n<<" is :"<<ans;
  */

  //  2^n code
  /*
  int pow = power(n);
  cout<<"\n the power of 2 is :"<<pow;
  */

  // print n to 1
  print(n);



}
