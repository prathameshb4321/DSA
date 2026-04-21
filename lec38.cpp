#include<iostream>
#include<string>
#include<vector>
using namespace std;

void recursion(string arr[] , int i , string output , vector<string> &ans /* pass by reference*/ , string digit )
{

  // base condition
  if(i>=digit.size()){
    ans.push_back(output);

    return;
  }

  // recursion
  char NO = digit[i];         //"2"
  int no = NO - '0' ;         // 2
  string alpha = arr[no];  // "abc"

  for(int j = 0;j<alpha.size();j++)
  {
      output.push_back(alpha[j]);
      recursion(arr , i+1 , output , ans , digit);
      output.pop_back();

  }



}


vector<string> lettercomb(string digit)
{
   vector<string> ans;


   if(digit.length()==0){
    return ans;
   }
   string output = "";
   int i = 0;
   string arr[10] = {"" , "" , "abc" , "def","ghi","jkl","mno","pqrs","tuv","wxyz"};

   recursion(arr , i , output , ans , digit);

   return ans;
}







int main()
{
   string digit = "23";

   vector<string> op = lettercomb(digit);
   for(int i=0;i<op.size();i++){
    cout<<op[i]<<" ";
   }

}
