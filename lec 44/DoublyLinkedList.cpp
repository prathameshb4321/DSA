#include<iostream>
using namespace std;


class Node {
  public:
   int val ;
   Node * prev ,*next;

  Node(int data)
  {
   this->val = data;
   this->prev =nullptr;
   this->next=nullptr;
  }

};

void print(Node* &head){

    Node *temp =  head;
    while(temp!=nullptr){
     cout<<temp->val;
     temp = temp->next;
     }
   cout<<endl;
}

int getLength(Node *&head)
{   int cnt = 0;
    Node *temp =  head;
    while(temp!=nullptr)
    {
     temp = temp->next;
     cnt++;
    }
  return cnt;
}
int main()
{
  Node * node1 = new Node(10);
  Node * head = node1;
  print(head);
  cout<<getLength(head);
}
