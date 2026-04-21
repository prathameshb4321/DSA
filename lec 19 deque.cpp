#include<iostream>
using namespace std;

#include<deque>

int main()
{
  deque<int>d;
  d.push_back(1);
  d.push_front(2);

  cout<<"d :";
  for(int i:d){
    cout<<i<<" ";
  }

  cout<<"\n ele at index 1 : "<<d.at(1)<<endl;
   cout<<"after pop_front d :";
  d.pop_front();
   for(int i:d){
    cout<<i<<" ";
  }
   cout<<"\nafter pop_back d :";
  d.pop_back();
   for(int i:d){
    cout<<i<<" ";
  }

  cout<<"\n d.empty(): "<<d.empty();
  cout<<"\n d.size() :"<<d.size();

}
