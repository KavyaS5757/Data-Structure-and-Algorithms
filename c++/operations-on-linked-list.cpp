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

int main()
{
	// int A[]={3,5,7,10,15,24,2,1,34,20};
	// create(A,10);

	insert(first,0,100);
	display(first);
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