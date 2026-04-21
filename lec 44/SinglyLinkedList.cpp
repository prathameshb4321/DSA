#include<iostream>
using namespace std;

class Node
{
  public:
      int data;
      Node* next;

   Node(int data)
   {
       this->data = data;
       this->next = NULL;
   }

};


void InsertAtHead(Node* &head , int data)
{ Node* temp = new Node(data);  //new node create

  temp->next = head;
  head= temp;

}

void InsertAtTail(Node* &tail ,Node* &head , int data)
{
  Node* temp = new Node(data);  //new node create
  if(head==NULL)
  {
    head = temp;
    tail = temp;

  }
  tail->next = temp;
  tail= temp;

}
void InsertAtPosition(Node*&head, Node* &tail  ,int position , int data)
{   Node* temp1 = head;
    Node* temp = new Node(data);

    // insert at start
    if(position==1)
    { InsertAtHead(head , data);
      /* temp->next = head;
        head = temp;

      */
      return;
    }
    for(int i = 1; i<position-1 ; i++)
    {
     temp1 = temp1->next;
    }
    // Insert at last position
    if(temp1->next==NULL)
    {
       InsertAtTail(tail ,head ,data);
       return;
    }
    temp->next = temp1->next;
    temp1->next = temp;
}


void print(Node* &head)
{ Node* temp = head;
  while(temp!=NULL)
  {
    cout<<temp->data<<" -> ";
    temp=temp->next;
  }
 cout<<endl;
}

void deleteNode(Node* &head , int position)
{
  Node* temp = head , *curr;
  if(position==1)
  {
    head = temp->next;
    delete temp;
    return;
  }
  for(int i=1 ;i<position-1 ; i++)
  {

    temp = temp->next;

  }
  if (temp->next == NULL)
    {
        cout << "Position out of range\n";
        return;
    }

  curr = temp->next;
  temp->next = curr->next;
  delete curr;
}

int main()
{ Node* head = NULL;  // head is pointer to Node class type obj

// InsertAtHead
  for(int i=0;i<5 ; i++)
  {
    InsertAtHead(head ,i+1);
  }
  print(head);

// InsertAtTail
  head = NULL;
  Node * tail = head;
   for(int i=0;i<5 ; i++)
  {
    InsertAtTail(tail,head ,i+1);
  }
  print(head);

//InsertAtPosition
/* cout<<"head"<<head->data<<endl;
  cout<<"tail"<<tail->data<<endl;
  cout<<"Enter position and data";
  int position ,data;
  cin>>position>>data;

  InsertAtPosition(head ,tail,position ,data);
  print(head);
  cout<<"\nhead"<<head->data<<endl;;
  cout<<"tail"<<tail->data;
*/
// delete the node
int pos;
cout<<"\n enter the position :";
cin>>pos ;
deleteNode(head ,pos);
print(head);
 return 0;
}
