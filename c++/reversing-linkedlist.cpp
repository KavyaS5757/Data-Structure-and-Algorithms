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
}*first = NULL;

void create(int A[], int n)
{
	int i;
	struct Node *t,*last;
	first=(struct Node*)malloc(sizeof(struct Node));
	first->data=A[0];
	first->next=NULL;
	last=first;
	
	for(i=1;i<n;i++)
	{
		t=(struct Node*)malloc(sizeof(struct Node));
		t->data=A[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
}

void display(struct Node *p)  //print numbers in a normal way
{
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
}

void display1(struct Node*p)  //print numbers in a recursive manner
{
	while(p!=NULL)
	{
		display1(p->next);
		printf("%d",p->data);
	}
}

void Rdispaly1(struct Node *p)  //normal case using recursive case
{
	if(p!=NULL)
	{
		printf("\n%d ",p->data);
		Rdispaly1(p->next);
	}
}

void Rdispaly(struct Node *p)  //reverse case using recursive case
{
	if(p!=NULL)
	{
		Rdispaly(p->next);
		printf("\n%d ",p->data);
	}
}

int count(struct Node *p)  //counting the numbers present in the linked list
{
	int c=0;
	while(p!=NULL)
	{
		c++;
		p=p->next;
	}

	return c;
}

int Rcount(struct Node *p)   // counting numbers in a recursive manner (but actually it won't effect the result as the result is same in both ways)
{
	if(p==0)
	return 0;
	else
	{
		return Rcount(p->next) + 1;
	}
}

int sum(struct Node *p)  //calculation of sum in a normal way
{
	int sum=0;
	while(p!=NULL)
	{
		sum+=p->data;
		p=p->next;
	}

	return sum;
}

int Rsum(struct Node *p) //calculating in a recursive manner
{
	if(p==0)
	return 0;
	return Rsum(p->next)+p->data;
}

int maximum_minimum(struct Node *p)  //finding out the maximum as well as minimum element in the linked list
{
	int max=INT32_MIN;
	int min=INT32_MAX;
	while(p!=NULL)
	{
		
		if(p->data > max)
		{
			max=p->data;
			
		}

		if(p->data<min)
		min=p->data;
		p=p->next;
	}
	printf("\nThe maximum element is %d",max);
	printf("\nMinimum element is %d",min);
}

int Rmaximum(struct Node *p)     //in the recursive manner
{
	
	while(p!=NULL)
	{
		if(p==0)
		return INT32_MIN;

		else
		{

			if(Rmaximum(p->next)>p->data)
			return Rmaximum(p->next);
			else
			return p->data;
		}
	}
}

int Rmaximum1(struct Node *p)  //concising the previous code's last logic in this code
{
	
	while(p!=NULL)
	{
		if(p==0)
		return INT_MIN;
		
		else
		return Rmaximum(p->next)>p->data ? Rmaximum(p->next): p->data;
	}
	
}

struct Node * LSearch(struct Node *p,int key)  //linear search of the key
{
	while(p!=NULL)
	{
		if(key==p->data)
		return (p);
		p=p->next;
	}
	return NULL;
}

struct Node *LSearch1 (struct Node* p,int key)  //recursive version of searching
{
	if(p==NULL)
	return NULL;
	else if(key==p->data)
	return p;
	return LSearch1(p->next,key);
}

struct Node *LSearch2(struct Node *p, int key)  //improving linked list in an advanced way (move to head method)
{
	struct Node * q=NULL; //q is declared for making correction for the previous node
	while(p!=NULL)
	{
		if(key==p->data)
		{
			q->next=p->next;
			p->next=first;
			first=p;
			return p;
		}
		q=p;
		p=p->next;
	}
	return NULL;
}

void insert(struct Node *p,int index,int key)
{
	struct Node *t;

	if(index<0 || index>count(p))
	return ;

	t=(struct Node*)malloc(sizeof(struct Node));
	t->data=key;

	if(index==0)
	{
		t->next=first;
		first=t;
	}

	else 
	{
		for(int i=0;i<index-1 && p;i++)  //checking whether the p is not NULL pr not
		{
			p=p->next;
		}
		if(p)
		{
			t->next=p->next;
			p->next=t;
		}

	}
}

void InsertLast(struct Node **p, int key)  //chatgpt one -- using double pointers
{
    struct Node *t;
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = key;
    t->next = NULL;

    if (*p == NULL)
    {
        *p = t;
    }
    else
    {
        struct Node *current = *p;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = t;
    }
}


void InsertLast1(struct Node*p,int key)     //after correction
{
	struct Node *t ;
	struct Node *q=NULL;
	t=(struct Node *)malloc(sizeof(struct Node));
	t->data=key;
	t->next=NULL;

	if(first == NULL)
	{
		first=p=t;
	}
	else
	{
		q=p;
		while(q->next!=NULL)
		{
			
			q=q->next;
		}
		q->next=t;
	}
}

void insertsort(struct Node *p,int key)
{
	struct Node * q=NULL; //q is declared for making correction for the previous node
	struct Node * t;
	t=(struct Node*)malloc(sizeof(struct Node));
	t->data=key;
	t->next=NULL;
	if(first == NULL)
	{
		first=t;
	}
	else
	{
		while(p && p->data<key)
	    {
	    	q=p;
	    	p=p->next;
	    }
	    

	    if(p==first)
	    {
	    	t->next=first;
	    	first=t;
	    }
	    else
	    {
	        t->next=q->next;
	        q->next=t;
	    }
	}
	
}

int delete_elements(struct Node *p, int index)
{
	struct Node *q=NULL;
	int x=-1,i;
	
	if(index>1 || index>count(p))
	return -1;

	if(index==1)
	{
		q=first;
		x=first->data;
		first=first->next;
		free(q);
		return x;
	}

	else
	{
		for(i=0;i<index-1;i++)
		{
			q=p;
			p=p->next;
		}
		q->next=p->next;
		x=p->data;
		free(p);
		return x;
	}
}

int sorted_check(struct Node *p)
{
	int x=-65536;
	while(p!=NULL)
	{
		if(p->data<x)
		return 0;
		x=p->data;
		p=p->next;
	}
	return 1;
}

void remove_sorted(struct Node *p)
{
	struct Node *q=p->next;

	while(q!=NULL)
	{
		if(p->data!=q->data)
		{
			p=q;
			q=q->next;
		}
		else
		{
			p->next=q->next;
			free(q);
			q=p->next;
		}
	}

}

void reverse(struct Node *p)    //reversing elements
{
	int i=0;
	int *A;
	struct Node *q=p;
	A=(int *)malloc(sizeof(int));
	while (q!=NULL)
	{
		A[i]=q->data;
		q=q->next;
		i++;
	}
	q=p;
	i--;
	while(q!=NULL)
	{
		q->data=A[i];
		q=q->next;
		i--;
	}
	
}

//reversing using sliding pointers
void Reverse2(struct Node *p)
{
	struct Node *q=NULL, *r=NULL;

	while(p!=NULL)
	{
		r=q;
		q=p;
		p=p->next;
		q->next=r;
	}
	first=q;
}

//reversing using the recursive property
void Reverse3(struct Node*q,struct Node*p)
{
	if(p)
	{
		Reverse3(p,p->next);
		p->next=q;
	}
	else
	first=q;
}

int main()
{
	int A[]={10,20,20,20,30,30,30,30,40,50};
	create(A,10);
	Reverse3(NULL,first);

	// printf("%d\n",sorted_check(first));

	// if(sorted_check(first))
	// printf("The given array is sorted\n");
	// else
	// printf("The given array is not sorted\n");

	// remove_sorted(first);
	// insertsort(first,9);
	// insertsort(first,9);
	// insertsort(first,9);
	// InsertLast(&first,100);
	// InsertLast(&first,200);
	// InsertLast(&first,300);
	// InsertLast(&first,400);
	// InsertLast(&first,500);
	// InsertLast(&first,600);
	// InsertLast(&first,700);
	// InsertLast(&first,800);
	// InsertLast(&first,900);

	// InsertLast1(first,100);
	// InsertLast1(first,200);
	// InsertLast1(first,300);
	// InsertLast1(first,400);
	// InsertLast1(first,500);
	// InsertLast1(first,600);
	// InsertLast1(first,700);
	// InsertLast1(first,800);
	// InsertLast1(first,900);

	// delete_elements(first, 3);

	// insert(first,10,100);
	display(first);
	printf("\n\n");

	//creating a linked list using insertion function

	// Rdispaly(first);
	// maximum_minimum(first);

	// printf("\n Count of numbers present in the linked list is %d",Rcount(first));
	// printf("\n The sum of numbers present in the linked list is %d",Rsum(first));
	// printf("\n The maximum element of this list is %d",Rmaximum(first));
	// printf("\n The maximum element of this linked list is %d",Rmaximum1(first));
	
	//for linear search
	// struct Node*temp;
	// temp=LSearch(first,7);
	// if(temp)
	// printf("\nThe key element is found %d",temp->data);
	// else
	// printf("\nThe key element didn't found");

	// //for linear search in recursive way
	// struct Node*temp1;
	// temp1=LSearch1(first,7);
	// if(temp1)
	// printf("\nThe key element is found(in recursive manner) %d",temp1->data);
	// else
	// printf("\nThe key element didn't found(recursive manner)");
	

	return 0;

}