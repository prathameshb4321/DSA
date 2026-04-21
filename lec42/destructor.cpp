#include<iostream>
using namespace std;



class Hero{
public:
  Hero()
  {
      cout<<"constructer is called"<<endl;
  }



  ~Hero()
  {
   cout<<"Destructor is called "<<endl;
  }

};

int main()
{
    // Statict obj creation

    Hero hero1;


    //Dyanmic obj crated
    Hero *hero2 = new Hero;


}
