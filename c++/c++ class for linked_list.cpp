#include <stdio.h>
#include<iostream>
#include<stdlib.h>
#include <string.h>
#include <vector>
#include <stdlib.h>
#include<map>
#include <set>
#include <unordered_map>
#include<algorithm>

using namespace std;

class Node
{
    public:
    int data;
    Node * next;
};

class Linkedlist
{
    private:
    Node* first;
    public:
    Linkedlist(){first=NULL;}
    Linkedlist(int A[],int n);
    ~Linkedlist();

    void Display();
    void Insert(int index, int x);
    int Delete(int index);
    int Length();
};

Linkedlist::Linkedlist(int A[],int n)
{
    Node *t,*last;
    first=new Node;
    first->data=A[0];
    first->next=NULL;
    last=first;
    int i=0;

    for(i=1;i<n;i++)
    {
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

Linkedlist::~Linkedlist()
{
    Node *p=first;
    while(first)
    {
        first=first->next;
        delete p;
        p=first;
    }
}

void Linkedlist::Display()
{
    Node *p=first;

    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

int Linkedlist::Length()
{
    Node * p=first;
    int len=0;

    while(p)
    {
        len++;
        p=p->next;
    }

    return len;
}

void Linkedlist::Insert(int index, int x)
{
    Node *t,*p=first;
    if(index>0 && index>Length())
    return;

    t=new Node;
    t->data=x;
    t->next=NULL;

    if(index==0)
    first=t;
    else
    {
        for(int i=0;i<index-1;i++)
        {
            p=p->next;
        }
        t->next=p->next;
        p->next=t;
    }
}

int Linkedlist::Delete(int index)
{
    Node *p,*q=NULL;
    int x=-1;

    if(index<0 || index>Length())
    return -1;

    if(index==1)
    {
        p=first;
        first=first->next;
        x=first->data;
        delete p;
    }
    else
    {
        p=first;
        for(int i=0;i<index-1;i++)
        {
            q=p;
            p=p->next;
        }
        q->next=p->next;
        x=p->data;
        delete p;
    }
    return x;
}

int main()
{
    int A[]={1,2,3,4,5};
    Linkedlist l(A,5);
    // cout<<l.Delete(2)<<endl;

    l.Insert(1,11);

    cout<<l.Length()<<endl;
    l.Display();
}