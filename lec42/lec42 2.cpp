  #include<iostream>
using namespace std;


class Hero{
    public:
        int level =10 ;

    private:
        char health='A';

        void print(){
        cout<<health<<endl;
        }
   public:

   char gethealth(){
      return health;
   }

   void sethealth(char val,char password){
      if(password=='P') {
            health=val;
      }
    }

};


int main()
{
   // object
   Hero h1;
  cout<<h1.level;
  cout<<"\n";
  cout<<h1.gethealth();

   h1.sethealth('O','P');
  cout<<endl<<h1.gethealth();

}
