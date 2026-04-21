#include<iostream>
using namespace std;

void update(int **p2)
{
   p2 = p2+1;
 //*p2 = *p2+1;
 // **p2 = **p2+1;
}

int main()
{
   int i=5;
   int *p1 = &i;
   int **p2 = &p1;
   int ***p3 = &p2;

   cout<<&i<<&p1<<&p2;
   cout<<endl<<i;
   cout<<endl<<&i;
   cout<<endl<<p1;
   cout<<endl<<p2;
   cout<<endl<<p3;
   cout<<endl<<endl<<*p3;
   cout<<endl<<**p3;
   cout<<endl<<***p3;
   cout<<endl<<*p2;
   cout<<endl<<**p2;
   cout<<endl<<**p2;
   cout<<endl<<*p1;


   cout<<endl<<endl<<i;
   cout<<endl<<p1;
   cout<<endl<<p2;
   cout<<endl<<p3;
     update(p2);
   cout<<endl<<endl<<i;
   cout<<endl<<p1;
   cout<<endl<<p2;
   cout<<endl<<p3;







}
