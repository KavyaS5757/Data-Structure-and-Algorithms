#include <stdio.h>

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

int main()
{
    int A[]={1,2,3,4,5,6,7};
    create(A,7);
    Rdisplay(Head);
    return 0;
}