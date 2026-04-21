  #include<iostream>
using namespace std;


class Hero{
public :
   Hero(){
     cout<<"constructor called .\n";
   }
};


int main()
{
   // object   statically
   Hero h1;


   // Dynamically obj creation
   Hero *h2 = new Hero;




}
