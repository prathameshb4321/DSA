#include<iostream>
using namespace std;

class A
{  public:

   void Hello(){
     cout<<"Hello how are you..."<<endl;
   }
};

class B
{
   public:
       void Hello(){
         cout<<"Hello B....."<<endl;
       }

};

class C : public A,public B
{  public:


};

int main()
{
    C obj;
    obj.A::Hello();

    obj.B::Hello();


}
