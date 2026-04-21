#include<iostream>
using namespace std;

int main()
{
    int arr[10] = {1,2,3};
    int *p= &arr[0];
    cout<<"address of 1'st memory block : "<<arr;
    cout<<"\n 1'st location address : "<<&arr[0];
    cout<<endl<<arr[0];
    cout<<endl<<*arr;
    cout<<endl<<(*arr)++;
    cout<<endl<<*arr;
    cout<<endl<<*(arr+1);
    p += 2;
    cout<<endl<<*p;
    cout<<endl<<arr[2];
    cout<<endl<<*(arr+2);
    cout<<endl<<2[arr];

    // diff b/w arr and pointer
    cout<<endl<<"sizes";
    cout<<endl<<sizeof(arr);
    cout<<endl<<sizeof(*arr);
    cout<<endl<<sizeof(&arr);

    cout<<endl<<sizeof(p);
    cout<<endl<<sizeof(*p);
    cout<<endl<<sizeof(&p);

    cout<<"\n \n";

    int Arr[10] = {1,2,3,4,5};
    // ERROR
       //Arr = Arr + 1;

   int *ptr = &Arr[0];
  ptr = ptr+1;
  cout<<*ptr;
  cout<<"\n \n";

  cout<<"diff b/w int arrays and char arrays \n";

  int Array[5] = {1,2,3,4,5};
  char ch[6] = "abcde"; // last one is '\0' by default

  cout<<endl<<arr;
  cout<<endl<<ch;

  cout<<" next \n\n\n\n\n";
  char wxy = 'p';
  char *o = &wxy;
  cout<<wxy;

//      POINTER of functions


    cout<<" \n pointer in function: \n";
    int value = 5;
    int *k = &value;
    print(k)




}

void print(int *k)
{
    cout<<k<<endl;
}
