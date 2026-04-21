#include<iostream>
using namespace std;

int main()
{

    int num = 5;
    cout<<&num<<endl;  //address of num
    int *p = &num;  // pointer
    cout<<*p<< endl;
    cout<<++*p <<endl;
    cout<<num;


    cout<<"\n size of integer :"<<sizeof(num);
    cout<<"\n size of pointer : "<<sizeof(p);

    double d = 4.2;
    double* p1 = &d;

      cout<<"\n size ofdouble :"<<sizeof(d);
    cout<<"\n size of pointer p1 : "<<sizeof(p1);

    //bad  practice
      // creating pointer ,pointing to garbage value
   /* char *p3;
    cout<<"\n garbage value is: "<<*p3;
    */

    int num1 = 5;
    int a1 = num1;
    cout<<"\na before"<<num1<<endl;
    a1++;
    cout<<"a after"<<num1<<endl;

    int *p2 = &num1;
    cout<<"befort : "<<num1<<endl;
    *p2++;
    cout<<"after : "<<num1<<endl;

     float f = 10.5;
float P = 2.5;
float* ptr = &f;
(*ptr)++;
*ptr = P;
cout << *ptr <<" "<< f << " " << P;



/*int a[] = {1, 2, 3, 4};
int *e = a++;                   // error
cout << *e << endl;

*/


  int arr[] = {4, 5, 6, 7};
  int *y = arr+1;
  cout <<endl<< *arr + 9;
  cout<<endl<<*y;


 cout<<endl;
  char b[] = "xyz";
char *c = &b[0];
cout << c << endl;


  int numbers[5];
  int * z;
 z = numbers;
  *z = 10;
  z = &numbers[2];
  *z = 20;
  z--;
  *z = 30;
  z = numbers + 3;
  *z = 40;
  z = numbers;
  *(z+4) = 50;
  for (int n=0; n<5; n++) {
     cout << numbers[n] << ",";
}
cout<<endl;

char st[] = "ABCD";
  for(int i = 0; st[i] != '\0'; i++) {
     cout << st[i] << *(st)+i << *(i+st) << i[st];
  }
}


