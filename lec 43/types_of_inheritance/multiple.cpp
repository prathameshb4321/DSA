#include<iostream>
using namespace std;

  // Single inheritance
class Animal{
  public:

   void bark()
   {
    cout<<"\n barking...\n";
   }

};

class Human{
   public:
       void speak()
       {
        cout<<"speaking";
       }

};

class Hybrid:public Animal, public Human
{



} ;



int main()
{
     Hybrid obj;
     obj.speak();
     obj.bark();

    return 0;
}
