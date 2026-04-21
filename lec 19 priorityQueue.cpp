#include<iostream>
using namespace std;

#include<queue>

int main()
{  // max--heap  like  created
   priority_queue<int>maxi;


   // min--heap  like created
   priority_queue<int,vector<int>, greater<int>>mini;

//  max priority operations
   maxi.push(1);
   maxi.push(3);
   maxi.push(4);
   maxi.push(0);
   cout<<"size of priority queue:"<<maxi.size();

    int n=maxi.size();
    cout<<"\n element in priority max queue : ";
    // Priority max queue always arrange larger ele at first...
   for(int i=0;i<n;i++)
   {
       cout<<maxi.top()<<" ";
       maxi.pop();
   }

 // min priority queue

   mini.push(4);
   mini.push(0);
   mini.push(3);
   mini.push(1);
   mini.push(2);

   int m=mini.size();
   cout<<"\n size of mini : "<<mini.size();
   cout<<"\n elements in it: ";
   for(int i=0;i<m;i++){

    cout<<mini.top()<<" ";
    mini.pop();
   }

   cout<<"\n mini.empty() :"<<mini.empty()<<"->means true";

}
