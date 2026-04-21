#include<iostream>
using namespace std;

// Static data type is accessible out of class without object creation

class Hero
{
  public:
    static int TimetoComplete;


};
int Hero::TimetoComplete = 5;


int main()
{
  cout<<&(Hero::TimetoComplete)<<endl;


}
