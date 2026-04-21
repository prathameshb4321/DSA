#include<iostream>
#include "Hero12.cpp"
using namespace std;


class Hero {

    // properties
    int Health;

 };


class villan {

    // properties


 };

 // Access Specifiers
class Access {
 public:
   int a;
 private:
    int b;

   void print(){
     cout<< b <<endl;
   }


} ;

 int main(){

    // class Hero  object
    Hero h1;
    cout<<"size :"<<sizeof(h1);

    // class  villan obj
    villan v1;
    cout<<"\nempty class obj size :"<<sizeof(v1)<<endl;


    //class Hero12 obj
    cout<<"\nAnother cpp file class object creation in current file"<<endl;
    Hero12 h12;
    cout<<h12.name<<"\nlevel : "<<h12.level;

    /* class Hero  Health  */
    // cout<<"\n class Hero health:"<<h1.Health;

    /*
       // Access Specifiers
    */
    Access o1;
   // cout<<endl<<o1.print();    // create error that it is private
    cout<<endl<<"a = "<<o1.a ;
    o1.a = 100;
    cout<<endl<<"a = "<<o1.a;


  return 0;
 }
