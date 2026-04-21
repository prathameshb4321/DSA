#include<iostream>
using namespace std;


class A
{ public:
   void fun()
   {
       cout<<"I am from class A \n";
   }


};

class B
{
 public:
   void fun()
   {
       cout<<"I am from class B \n ";
   }

};

class C:public A, public B
{

};

int main()
{
    C obj;
    obj.A::fun();
    obj.B::fun();
    return 0;
}
