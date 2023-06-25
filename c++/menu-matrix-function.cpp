#include <stdio.h>
#include <conio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

//menu driven program for matrices for diagonal elements

//for lower triangle, upper triangle etc we will change its corresponding equations

/* 
int main ()        -- c code
{
    int n, ch, y, i, j;

    printf ("Enter Dimension of Matrix: ");
    scanf ("%d", &n);
    int *B = (int *) malloc (n * sizeof (int));

    do       //in order to make the menu available unless the users don't want to make appear it in screen
    {
        printf ("\n1. Create Matrix\n");
        printf ("2. Get Matrix Element\n");
        printf ("3. Set Matrix Element\n");
        printf ("4. Display Matrix\n");
        printf ("0. Exit\n\n");

        printf ("Enter choice: ");
        scanf ("%d", &ch);

        switch (ch)
        {
          case 1:
             printf ("Enter non-zero elements of Diagonal Matrix:\n");
             for (int k = 0; k < n; k++)
             {
                 scanf ("%d", &B[k]);
             }
             break;

          case 2:
             printf ("Enter Indices: \n");
             scanf ("%d%d", &i, &j);
             if (i == j)
                 printf ("%d ", B[i - 1]);
             else
                 printf ("0 ");
             break;

          case 3:
             printf ("Enter row, column and element:\n");
             scanf ("%d%d%d", &i, &j, &y);
             if (i == j)
                 B[i - 1] = y;
             break;

          case 4:
             printf ("Matrix is: \n");
             for (int r = 0; r < n; r++)
             {
                 for (int c = 0; c < n; c++)
                 {
                   if (r == c)
                   {
                      printf ("%d ", B[r]);
                   }
                   else
                   {
                      printf ("0 ");
                   }
                 }
                 printf ("\n");
             }
             break;

             printf ("Enter choice: ");
             scanf ("%d", &ch);
       }
    }
    while (ch > 0);

    getchar ();

	return 0;
}
*/

/*
int * CreateMatrix(int *A,int n)     //using function method   -- c code
{
	printf("Enter the non-zero elements of the matrix");
	for(int i=0;i<n;i++)
	scanf("%d",&A[i]);
}

void SetElement(int *A, int i, int j, int x)
{
	if(i==j)
	A[i-1]=x;
}

void GetElement(int *A,int i,int j)
{
	if(i==j)
	printf("%d ",A[i-1]);
	else
	printf("0 ");
}

void Display(int *A,int n)
{
	printf("Matrix is: \n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==j)
			printf("%d ",A[i]);
			else
			printf("0 ");
		}
		printf("\n");
	}
}
int main()
{
	int n,ch,x,i,j;

	printf("Enter the dimension of the matrix: ");
	scanf("%d",&n);

	int *A=(int *)malloc(n*sizeof(int));

	do
	{
		printf("\n1. Create Matrix\n");
		printf("2. Get Matrix Elements\n");
		printf("3. Set Matrix Elements\n");
		printf("4. Display Matrix\n");
		printf("0. Exit\n");

		printf("Enter your choice: ");
		scanf("%d",&ch);

		switch (ch)
		{
		case 1:
			CreateMatrix(A,n);
			break;
		case 2:
		    printf("Enter Indices: \n");
			scanf("%d %d",&i,&j);
			GetElement(A,i,j);
			break;
		case 3:
		    printf("Enter row, column and element: \n");
			scanf("%d %d %d",&i,&j,&x);
			SetElement(A,i,j,x);
			break;
		case 4:
			Display(A,n);
			break;
		
		}
		printf("Enter your choice: ");
		scanf("%d",&ch);
	}
	while(ch>0);
	getchar();
}
*/


class Menu     // -- c++ code
{
    private:
       int *A;
       int n;
    public:
       Menu(int n);
       void CreateMatrix();
       void SetElement(int i,int j,int x);
       void GetElement(int i,int j);
       void Display();
       ~Menu();
};

Menu::Menu(int n)
{
    this->n=n;
    A=new int[this->n];
}

void Menu :: CreateMatrix()     //using function method   -- c code
{
	cout<<"Enter the non-zero elements of the matrix";
	for(int i=0;i<n;i++)
	cin>>A[i];
}

void Menu :: SetElement(int i, int j, int x)
{
	if(i==j)
	A[i-1]=x;
}

void Menu :: GetElement(int i,int j)
{
	if(i==j)
	cout<<A[i-1];
	else
	cout<<"0 ";
}

void Menu :: Display()
{
	cout<<"Matrix is: "<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==j)
			cout<<A[i]<<" ";
			else
			cout<<"0 ";
		}
		cout<<endl;
	}
}

Menu::~Menu()
{
    delete[]A;
}

int main()
{
	int n,ch,x,i,j;

	cout<<"Enter the dimension of the matrix: ";
	cin>>n;

	Menu m(n);

	do
	{
		cout<<"\n1. Create Matrix\n";
		cout<<"2. Get Matrix Elements\n";
		cout<<"3. Set Matrix Elements\n";
		cout<<"4. Display Matrix\n";
		cout<<"0. Exit\n";

		cout<<"Enter your choice: ";
		cin>>ch;
		switch (ch)
		{
		case 1:
			m.CreateMatrix();
			break;
		case 2:
		    cout<<"Enter Indices: \n";
			cin>>i>>j;
			m.GetElement(i,j);
			break;
		case 3:
		    cout<<"Enter row, column and element: \n";
			cin>>i>>j>>x;
			m.SetElement(i,j,x);
			break;
		case 4:
			m.Display();
			break;
		
		}
		cout<<"Enter your choice: ";
		cin>>ch;
	}
	while(ch>0);
	getchar();
}


/*
    Reference I've taken:
    DSA Udemy Course
    https://dotnettutorials.net/lesson/menu-driven-program-for-matrices/
*/
