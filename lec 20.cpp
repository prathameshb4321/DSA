#include<iostream>
using namespace std;
#include<vector>

vector<int> revrse(vector<int>&v)
{
    int s=0;
    int e=v.size()-1;

    while(s<=e)
    {
        swap(v[s],v[e]);
        s++;
        e--;
    }
   return v;
}

void print(vector<int>&v)
{

    for(int i=0;i<v.size();i++)
    {
    cout<<v[i]<<" ";
    }
}


int main()
{   int n;
   vector<int>v;
   cout<<"enter no";
   cin>>n;
 for(int i=0;i<n;i++)
 {
    v.push_back(i);
 }

  revrse(v);
  print(v);
}
