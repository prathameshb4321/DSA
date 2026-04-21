#include<iostream>
#include<string.h>
using namespace std;


class Hero{
      // Properties
      int health;  // by default private


  public:
      char level;
      char *name;

     Hero(){
        cout<<"simple constructor called"<<endl;
        name = new char[100]; // Dynamic size allocation
     }

    void print(){
       cout<<" Name : "<<this->name;
       cout<<" health : "<<this->health;
       cout<<" Level : "<<this->level;
       cout<<endl;
    }

    void sethealth(int h){
       health=h;
    }
    void setlevel(char ch){
    level=ch;
    }

    void setName(char name[]){
    strcpy(this->name,name);
    }


};

int main()
{
    Hero hero1;
    hero1.sethealth(12);
    hero1.setlevel('A');
    char name[10]="Babbar";
    hero1.setName(name);

    hero1.print();

    // default copy constructor

    Hero hero2(hero1);
    // or Hero hero2 = hero1;
    hero2.print();

    cout<<endl;

    hero1.name[0]='G';

    hero1.print();
    cout<<endl<<"Due to Default Constructor Shallow copy  \n";
    hero2.print();

}
