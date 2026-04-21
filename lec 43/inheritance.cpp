#include<iostream>
using namespace std;

class Human
{
public:
    int height=10;
    int weight=12;
    int age=18;

    int getAge(){
        return this->age;
    }

    void setweight(int w)
    {
        this->weight=w;
    }



};

class Male:public Human
{
   public:
       string color="fgnfj";

       void sleep()
       {
        cout<<",male sleeping .";
       }

};

int main()
{
    Male obj1;
    cout<<obj1.age<<endl;
    cout<<obj1.weight<<endl;
    cout<<obj1.height<<endl;
    obj1.setweight(20);
    cout<<obj1.weight<<endl;
    cout<<obj1.color<<endl;
    obj1.sleep();

}
