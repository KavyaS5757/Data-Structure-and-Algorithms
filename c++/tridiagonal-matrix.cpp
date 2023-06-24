#include <stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

//for the size of 5

// if (i-j)==1  index=i-1
// if (i-j)==0  index=(n-1)+(i-1)
// if (i-j)==-1 index=(2n-1)+(i-1)

/*
struct tridiagonal     //tridiagonal matrix/triband matrix   --c code
{
	int *A;
	int n;
};

void set(struct tridiagonal *t,int i,int j,int x)
{
	if((i-j)==1)
	t->A[i-1]=x;
	else if((i-j)==0)
	t->A[(t->n-1)+(i-1)]=x;
	else if((i-j)==-1)
	t->A[(2*t->n-1)+(i-1)]=x;
}

int get(struct tridiagonal t,int i, int j)
{
	if((i-j)==1)
	return t.A[i-1];
	else if((i-j)==0)
	return t.A[(t.n-1)+(i-1)];
	else if((i-j)==-1)
	return t.A[(2*t.n-1)+(i-1)];
	return 0;
}

void display(struct tridiagonal t)
{
	for(int i=1;i<=t.n;i++)
	{
		for(int j=1;j<=t.n;j++)
		{
			if((i-j)==1)
			printf("%d ",t.A[i-1]);
			else if((i-j)==0)
			printf("%d ",t.A[(t.n-1)+(i-1)]);
			else if((i-j)==-1)
			printf("%d ",t.A[(2*t.n-1)+(i-1)]);
			else
			printf("0 ");
		}
		printf("\n");
	}
}

int main()
{
	struct tridiagonal t;
	int i,j,y;
	printf("Enter dimension of the matrix: ");
	scanf("%d",&t.n);

	t.A = (int *)malloc((3*t.n-2)*sizeof(int));
	printf("Enter the elements:");
	for(i=1;i<=t.n;i++)
	{
		for(j=1;j<=t.n;j++)
		{
			scanf("%d",&y);
			set(&t,i,j,y);
		}
	}
	printf("\n");
	display(t);
	return 0;
}
*/

class tridiagonal        //            -- c++ code
{
	private:
	   int *A;
	   int n;
	public:
	   tridiagonal()
	   {
		n=10;
		A=new int[10*(10+1)/2];
	   }
	   tridiagonal(int n)
	   {
		this->n=n;
		A=new int[n*(n+1)/2];
	   }
	   ~tridiagonal()
	   {
		delete[]A;
	   }
	   int getdimension()
	   {
		return n;
	   }

	   void set(int i,int j,int x);
	   int get(int i,int j);
	   void display();
};

void tridiagonal :: set(int i,int j,int x)
{
	if((i-j)==1)
	A[i-1]=x;
	else if((i-j)==0)
	A[(n-1)+(i-1)]=x;
	else if((i-j)==-1)
	A[(2*n-1)+(i-1)]=x;
}

int tridiagonal ::get(int i,int j)
{
	if((i-j)==1)
	return i-1;
	else if((i-j)==0)
	return (n-1)+(i-1);
	else if((i-j)==-1)
	return (2*n-1)+(i-1);
	return 0;
}

void tridiagonal :: display()
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if((i-j)==1)
			cout<<A[i-1]<<" ";
			else if((i-j)==0)
			cout<<A[(n-1)+(i-1)]<<" ";
			else if((i-j)==-1)
			cout<<A[(2*n-1)+(i-1)]<<" ";
			else
			cout<<"0 ";
		}
		cout<<endl;
	}
}

int main()
{
	int d;
	cout<<"Enter the dimension of the elements: ";
	cin>>d;
	tridiagonal t(d);
	
	int x;
	cout<<"Enter all elements: "<<endl;
	for(int i=1;i<=d;i++)
	{
		for(int j=1;j<=d;j++)
		{
			cin>>x;
			t.set(i,j,x);
		}
	}
	t.display();
	return 0;
}

//if there're equal amount of diagonals except the major diagonal(middle one) along its both sides  --square band matrix

//References:-
/* 
    DSA Udemy courses 
*/