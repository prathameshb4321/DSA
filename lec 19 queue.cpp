#include<iostream>
using namespace std;

#include<queue>

int main(){

  queue<int>Q;

  Q.push(1);
  Q.push(2);
  Q.push(3);

   cout<<"first element:"<<Q.front();
   Q.pop();
   cout<<"\n after Q.pop()first ele:"<<Q.front();
   cout<<"\n size after pop():"<<Q.size();
}
