#include<iostream>
using namespace std;

#include<set>

int main()
{

 set<int> s;

 s.insert(5);
 s.insert(5);
 s.insert(5);
 s.insert(5);
 s.insert(5);
 s.insert(1);
 s.insert(6);
  s.insert(6);
   s.insert(6);
 s.insert(0);


 for(auto i:s){
    cout<<i<<" ";
 }


 s.erase(s.begin());
cout<<"\n";
 for(auto i:s){
    cout<<i<<" ";
 }
cout<<"\n 5 ele is present or not: "<<s.count(5);
cout<<"\n -5 ele is present or not: "<<s.count(-5);
}
