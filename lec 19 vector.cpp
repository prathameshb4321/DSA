#include<iostream>
using namespace std;

#include<vector>

int main()
{
   vector<int>v;

   cout<<"capacity->"<<v.capacity();

   v.push_back(1);
   cout<<"\n capacity->"<<v.capacity();

    v.push_back(2);
   cout<<"\n capacity->"<<v.capacity();

     v.push_back(3);
   cout<<"\ncapacity->"<<v.capacity();

   cout<<"\n size is->"<<v.size()<<endl;

 for(int i=0;i<v.size();i++)
 {
    cout<<v[i]<<" ";
 }

   cout<<"\n element at 2'nd pos :"<<v.at(2);
   cout<< "\n is empty "<<v.empty();
   cout<< "\nfirst ele : "<<v.front();
   cout<< "\n last ele "<<v.back();

      cout<<"\n before pop_back() :";
   for(int i=0;i<v.size();i++){
      cout<<v[i]<<" ";
   }
   v.pop_back();
   cout<<"\nafter pop_back() :";
    for(int i=0;i<v.size();i++){
      cout<<v[i]<<" ";
    }
    cout<<"\n";



}
