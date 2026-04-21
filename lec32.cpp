#include<iostream>
using namespace std;

void reach(int dest , int src)
{
    //base case
    if(src==dest)
    { cout<<"\n ghari aloo mi";
      return;
    }
    cout<<src;
    reach(dest,src+1);


}

int fabonic(int n)
{

   // base case
   if(n==0){
    return 0;
   }
   if(n==1){
    return 1;
   }

   int ans = fabonic(n-1)+fabonic(n-2);

   return ans ;

}


void Say(int n,string arr[] ){

   //base case
   if(n<=0){
    return ;
   }
   int a = n%10;

   n=n/10;
   Say(n,arr);
    cout<<arr[a]<<" ";


}

int main(){

  // Recursion understanding
  /*
   int dest = 10;
   int src= 1;
   reach(dest , src);
   */



   // Fabonic series

  /* int n;
   cout<<"enter n'th term of fabonic you want: \n ";
   cin>>n;
   int result = fabonic(n);
   cout<<"value for"<<n<<" :term is :"<<result;

   */


   // say digit
   int n;
   cout<<"enter the no: ";
   cin>>n;
   string arr[10]={"zero","one","two","three",
                    "four","five","six","seven",
                    "eight","nine"};

   Say(n,arr);

}
