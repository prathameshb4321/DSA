#include<iostream>
using namespace std;


class Hero{
   public:
      int health = 5;
      static int var;
     static void  random(){
       // cout<<health;
       // above line will create Error "Ststic fun can access Static data memberes only"
      cout<<var;
     }



};

int Hero::var = 100;

int main()
{
   cout<<Hero::var<<endl ;
   Hero::random();

}
