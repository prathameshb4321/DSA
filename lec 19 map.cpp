#include<iostream>
using namespace std;

#include<map>

int main()
{
  // ordered map|
  map<int,string>m;

  m[1]="hello";
  m[2]="acio";
  m[13]="pos13";


  m.insert({5,"bheem"});
  for(auto i:m)
  {
     cout<<i.first<<" "<<i.second<<endl;
  }

  cout<<"find 13 is present or not :"<<m.count(13);
  cout<<"\n find -13 is present or not "<<m.count(-13);
cout<<"\n after erase m.erase(13) : \n";
  m.erase(13);
   for(auto i:m)
  {
     cout<<i.first<<" "<<i.second<<endl;
  }





}

