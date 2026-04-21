#include<iostream>
using namespace std;
#include<array>

int main()
{
    int basic[4]={1,2,3,4};

    array<int,4>a={1,2,3,4};
    int Size=a.size();

    for(int i=0;i<Size;i++)
    {cin>>a[i];
    }
    cout<<"\n 2'nd element:"<<a.at(2);
    cout<<"\n empty or not : "<<a.empty();
    cout<<"\n Frist element : "<<a.front();
    cout<<"\n last element :"<<a.back();
   // cout<<basic.front();


}
