#include<iostream>
#include<string.h>
using namespace std;


class Hero{

  private:
      int health;
  public:
    char level;
    char* name;

  Hero(){
     cout<<"simple const call"<<endl;
     name = new char[100];
  }


  void print()
  {
     cout<<" Name :"<<this->name;
     cout<<" health :"<<this->health;
     cout<<" level :"<<this->level;
     cout<<endl;

  }

  //                                                                                                                                                              MY Own copy constructor
    Hero(Hero& temp){
      char *ch = new char[20];
      strcpy(ch , temp.name);

     this->health = temp.health;
     this->level = temp.level;
     this->name = ch;
  }

  void sethealth(int h){
    this->health=h;
  }
  void setlevel(char ch){
   this->level=ch;
  }
  void setName(char name[]){
    strcpy(this->name,name);
  }

};

int main(){

    Hero hero1;
    hero1.sethealth(10);
    hero1.setlevel('A');
    hero1.setName("Babbar");

    hero1.print();

    // My own Copyconstructor

    Hero hero2(hero1);
    // (or)  Hero hero2 = hero1;
    hero2.print();


    cout<<endl<<"changing name of hero1 obj from \"babbar \"to\"Gabbar\" \n";
    hero1.name[0]='G';
    hero1.print();


    hero2.print();




}
