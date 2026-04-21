#include<iostream>
using namespace std;

#include<stack>

int main(){

  stack<string>s;

  s.push("hello");
  s.push("wonderful ");
  s.push("day");
cout<<"top element:"<<s.top();

cout<<"\ns.pop():";
s.pop();

cout<<"\n s.size() :"<<s.size();
cout<<"\n s.empty():"<<s.empty();
}
