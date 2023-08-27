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
#include <iomanip>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*Head;

void create(int A[],int n)
{
    int i;
    struct Node *t,*last;
    Head=(struct Node *)malloc(sizeof(struct Node));
    Head->data=A[0];
    Head->next=Head;  //as this is a circular one
    last=Head;

    for(i=0;i<n;i++)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=last->next;
        last->next=t;
        last=t;
    }
}

void display(struct Node*p)
{
    do
    {
       printf("%d ",p->data);
       p=p->next;
    } while (p!=Head);

    printf("\n");
    
}

void Rdisplay(struct Node*p)
{
    static int flag=0;
    if(p!=Head || flag==0)
    {
        flag=1;
        printf("\n%d",p->data);
        Rdisplay(p->next);
    }
}

int count(struct Node*p)
{
    int length=0;
    do
    {
        length++;
        p=p->next;
    } while (p!=Head);
    return length;
    
}

void insert(struct Node *p, int index,int key)
{
    struct Node *t;
    int i;

    if(index<0 || index>count(p))
    return;

    if(index==0)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=key;
        if(Head==NULL)
        {
            Head=t;
            Head->next=Head;
        }
        else
        {
            p=Head;
            while (p->next!=Head)
            {
                p=p->next;
            }
            p->next=t;
            t->next=Head;
            Head=t;
            
        }
    }
    else
    {
        for(i=0;i<index-1;i++)
        {
            p=p->next;
        }
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=key;
        t->next=p->next;
        p->next=t;
    }
}

int Delete(struct Node*p,int index)
{
    if(index<0 || index>count(Head))
    return -1;
    int x=-1,i; 
    struct Node *q;
    if(index==0)
    {
        
        p=Head;
        while(p->next!=Head)
        {
            p=p->next;
        }
        x=Head->data;
        if(p==Head)
        {
            free(Head);
            Head=NULL;
        }
        else
        {
            p->next=Head->next;
            free(Head);
            Head=p->next;
        }
    }

    else
    {
        p=Head;
        for(i=0;i<index-2;i++)
        {
            p=p->next;
        }
        q=p;
        q=p->next;
        p->next=q->next;
        x=q->data;
        free(q);
    }
    return x;
}

int main()
{
    int A[]={1,2,3,4,5,6,7};
    create(A,7);
    Delete(Head,5);
    Rdisplay(Head);

    return 0;
}