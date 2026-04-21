#include<iostream>
using namespace std;

class A  // Overloading with diff no of arguments
{
   public :

       int add(int n1 , int n2){
             return n1+n2;
        }

        void add(int n1 ){
            cout<<n1;
         }
};


class B   // Overloading with diff types of arguments
{
 public:
    int add(int n1,int n2){
      return n1+n2;
    }

    double add(double n1 , double n2){
    return n1+n2;
    }

};


class C   // Default argument
{
public:
    int add(int x , int y , int z=0 , int w=0){
     return (x+y+z+w);
      }

};

int main()
{
   A obj;
   cout<<obj.add(1,2)<<endl;
   obj.add(3);
   cout<<endl;

   B obj1;
   cout<<obj1.add(2,3)<<endl;
   cout<<obj1.add(1.1,2.0)<<endl;


   C obj2;
   cout<<obj2.add(1,2)<<endl;
   cout<<obj2.add(1,2,3)<<endl;
   cout<<obj2.add(1,2,3,4)<<endl;

}
