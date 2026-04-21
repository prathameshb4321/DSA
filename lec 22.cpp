#include<iostream>

using namespace std;

string rever(char name[],int n)
{
    int i=0;
    int j=n-1;


    while(i<j)
    {
     swap(name[i++],name[j--]);

    }
    return name;
}
int getlen(char name[])
{
    int counter=0;
    for(int i=0;name[i]!='\0';i++)
    {
        counter++;
    }
    return counter;
}
int main()
{

    char name[20];
    cout<<"Enter the name : ";
    cin>>name;
   // name[2]='\0';
    cout<<"\n your name is: ";
    cout<<name<<endl;
     int n=getlen(name);
    cout<<"length :"<<n;
    string a=rever(name,n);
    cout<<"\n reverse of name : "<<a;
}
