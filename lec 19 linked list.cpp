#include<iostream>
using namespace std;

#include<list>

int main(){

    list<int>l;
    cout<<"n:";
    list<int> n(5,2);
    for(int i:n){
        cout<<i<<"->";
    }
    cout<<"\n";

    l.push_back(1);
    l.push_back(2);
    l.push_front(0);
    for(int i:l)
    {
    cout<<i<<" ";
    }
    cout<<"\n";
    l.erase(l.begin());
    cout<<"after erase";
    for(int i:l)
    {
    cout<<i;
    }

   cout<<"\n size of list"<<l.size();


}
