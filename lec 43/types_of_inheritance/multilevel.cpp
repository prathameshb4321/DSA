#include<iostream>
using namespace std;

  // Single inheritance
class Animal{
  public:
    int age=11;
    string name="fff";

   void speak()
   {
    cout<<"animal speaking...";
   }

};

class Dog:public Animal
{
  public:


} ;

class husky : public Dog{


};


int main()
{
    Dog d;
    d.speak();
   cout<<"\n age is "<<d.age;
   husky h;
   h.speak();
    return 0;
}
