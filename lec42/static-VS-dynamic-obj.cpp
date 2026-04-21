#include<iostream>
using namespace std;

class Hero {
   private:
       int health=100;
   public:
    char level='a';


   int gethealth(){
        return health;
   }

   char sethealth(int hel){
          health=hel;
   }



};


int main()
{
// Static allocation
    Hero a;
    cout<<"health is :"<<a.gethealth()<<" \n";
    cout<<"level is :"<<a.level<<"\n";



// Dynamic allocation
    Hero *b = new Hero;
    cout<<"health is :"<<(*b).gethealth()<<endl;
    cout<<"level is :"<<(*b).level<<endl;

    //  also can write it as
     cout<<"health is :"<<b->gethealth()<<endl;
    cout<<"level is :"<<b->level<<endl;







}
