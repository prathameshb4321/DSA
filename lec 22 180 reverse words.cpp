// leetcode 180
#include<iostream>
#include<string>
using namespace std;

int main(){
      string s1="my name is love";
       int n=s1.size();
       int p=0;
       int k=0;
       int i=0;
       cout<<s1<<endl;
     while(i<n){

         if(s1[i]==' '){
             k=i-1;
           while(p<k){
            swap(s1[p],s1[k]);
            p++;
            k--;
           }
           p=i+1;
         }

         if(i==n-1){
            k=i;
            while(p<k){
                swap(s1[p],s1[k]);
                p++;
                k--;
            }
         }
     i++;

     }
     cout<<s1;
}
