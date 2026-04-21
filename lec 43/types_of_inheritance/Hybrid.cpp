#include<iostream>
using namespace std;

class A{
   public:
      void funA(){
        cout<<"I am of A...\n";
      }
};
class B:public A{

};

class D {
  public :
      void hello(){
      cout<<"hello bhai....\n";
      }
};

class C :public A,public D{

};


int main()
{
  C objc;
  objc.funA();
  objc.hello();

  cout<<endl;
  B objb;
  objb.funA();

}
