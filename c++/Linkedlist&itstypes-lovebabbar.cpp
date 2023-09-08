#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }

};

void insertnodehead(Node *&head, int t)  //here we have took the reference as we don't want to work in copy material rather we want to work in original data only
{
    Node *temp= new Node(t);
    temp->next=head;
    head=temp;
}

void insertnodeend(Node * &head, int t)
{
    Node * temp=new Node(t);

    if(head==nullptr)
    {
        head=temp;
    }
    else
    {
        Node* current=head;
        while (current->next!=nullptr)
        {
            current=current->next;
        }
        current->next=temp;
        
    }
}

void insertatposition(Node* &tail,Node * &head, int position, int x)
{
    if(position==1)
    {
        insertnodehead(head, x);
        return;
    }
    Node *temp=head;
    int count=1;
    while(count < position-1)
    {
        temp=temp->next;
        count++;
    }

    if(temp->next==nullptr)
    {
        insertnodeend(head, x);
        return;
    }
    Node *nodeinsert=new Node(x);
    nodeinsert->next=temp->next;
    temp->next=nodeinsert;

}

void print(Node* head)
{
    Node * temp= head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;    
    }
    cout<<endl;
}

int main()
{
    //created a new node
    Node* node1 = new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    //head pointing towards node1
    Node* head= node1;
    Node* tail= node1;
    print(head);

    insertnodehead(head, 12);
    insertnodeend(tail, 3);
    insertatposition(tail, head, 1, 100);
    print(head);

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
}