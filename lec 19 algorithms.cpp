#include<iostream>
using namespace std;

#include<algorithm>
#include<vector>
int main()
{
  vector<int>v;

  v.push_back(1);
  v.push_back(3);
  v.push_back(6);
  v.push_back(7);
  v.push_back(0);

  for(int i:v)
  {
    cout<<i<<" ";
  }

  cout<<"\n finding 5 :->"<<binary_search(v.begin(),v.end(),5);

  cout<<"\n finding 6 :->"<<binary_search(v.begin(),v.end(),6);

  cout<<"\n lower bound-> of 6 :"<<lower_bound(v.begin(),v.end(),6)-v.begin();

  cout<<"\n upper bound-> of 6 :"<<upper_bound(v.begin(),v.end(),6)-v.begin();

  // max min swap
  int a=3;
  int b=5;
  cout<<"\na="<<a<<"\nb="<<b;
  cout<<"\n max(a,b) = "<<max(a,b);
  cout<<"\n min(a,b) = "<<min(a,b);

  cout<<" \n swap(a,b) :\n";
  swap(a,b);
  cout<<"a="<<a<<"\n b="<<b;
   cout<<"\n";
  // reverse string

  string st="abcd";
  cout<<"string st="<<st;
   cout<<"\n reverse(st.begin(),st.end()) :";
  reverse(st.begin(),st.end());
  cout<<st<<endl;

  // rotate vector

  cout<<"rotate vector :\n";
  cout<<"V:";
  for(int i:v)
  {
    cout<<i<<" ";
  }
  rotate(v.begin(),v.begin()+2,v.end());

  cout<<endl<<"V:";
  for(int i:v)
  {
    cout<<i<<" ";
  }



}
