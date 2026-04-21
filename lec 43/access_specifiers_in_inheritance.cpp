#include<iostream>
using namespace std;

class Human
{
public:
    int height=10;
    int weight=12;
    int age=18;
private :
    int a=1;
    int b = 2;


};


class Male:protected Human
{
    /*
  // parent class properties accessible like this
      protected:
         int height;
         int weight;
         int age;

    */

   public:
       string color="fgnfj";

       void sleep()
       {
        cout<<",male sleeping .";
       }


       int getheight()
       {
           return this->height;
       }


};


class male_1:private Human{

      string color="fgnfj";

       void sleep()
       {
        cout<<",male sleeping .";
       }



};

class male_2:public Human
{
  public:
      void get_a(){
      //  cout<<"a value is :"<<this->a;
           // error 'a' is private member of Human //
      }

};

int main()
{
    Male obj1;

    /*   error will occur
    cout<<obj1.age<<endl;
    cout<<obj1.weight<<endl;
    cout<<obj1.height<<endl;

    */

    cout<<obj1.getheight();

}



