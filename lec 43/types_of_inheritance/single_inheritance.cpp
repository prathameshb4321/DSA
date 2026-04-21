#include<iostream>
using namespace std;

  // Single inheritance
class Animal{
  public:
    int age=11;

   void speak()
   {
    cout<<"animal speaking...";
   }

};

class Dog:public Animal
{
  public:


} ;



int main()
{
    Dog d;
    d.speak();
   cout<<"\n age is "<<d.age;

    return 0;
}
