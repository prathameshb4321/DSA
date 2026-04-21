#include<iostream>
using namespace std;

class A
{  public:
    int a;
    int b;
    string s = "jd";
    void operator+(A &obj)
    {
        int value1 = this->a;
        int value2 = obj.a;
        cout<<value2-value1;
        cout<<"\n hello...";
    }


    void operator() ()
    {
        cout<<"\n i am bracket...";//<<this->a;
    }

    void operator-= (int value)
    {  this->a -=value;
    cout<<"Error will come..."<<this->a;
    }

     void operator+=(char a)
     {
         cout<<"\n hello bee...";
     }
    void operator&& ( string s2)
     {
        cout<< this->s+s2;
     }

};

int main()
{
   A obj1,obj2;

   obj1.a = 4;
   obj2.a = 7;

   obj1 + obj2;

    obj1();
    obj1-= 10 ;

    obj2 += 'a';


    obj1&&"oG";



}
