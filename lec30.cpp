#include<iostream>
using namespace std;


/*
   //   Macro
#define pi 3.14

int main(){

    int r=5;

    double area = pi*r*r;


    cout<<"area is "<<area;
}

*/

/*
// Inline fun()

inline int maxi(int a,int b)
{
    return (a>b)?a:b;
}

int main()
{
   int a,b;

   a = 4;
   b = 8;
   cout<<"bigger no is : "<<maxi(a,b);
}
*/


// default arguments

int defaulty(int a , int b, int c=10)
{

    return a+b+c;
}

int main()
{
    int a,b,c;
    cout<<defaulty(10,10,12);

}

