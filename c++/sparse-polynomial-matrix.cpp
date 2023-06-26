#include <stdio.h>
#include<iostream>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;

// Sparse matrix and polynomial representation

//creating a sparsematrix and displaying it here
/*
struct Element       //creating struct for non-zero elements   -- c code
{
    int i;
    int j;
    int x;
};

struct SparseMatrix
{
    int m;
    int n;
    int num;
    struct Element *ele;      //pointer for make it dynamic
};

void create(struct SparseMatrix *s)     //for creating the sparse matrix   -- calling the refernce
{
    printf("Enter the dimension: ");
    scanf("%d %d",&s->m,&s->n);           //getting the number of rows and columns
    printf("Enter number of non-zeros present in it");
    scanf("%d",&s->num);

    s->ele=(struct Element *)malloc(s->num * sizeof(struct Element));

    printf("Enter the non-zero elements: ");
    for(int i=0;i<s->num;i++)
    {
        scanf("%d %d %d",&s->ele[i].i,&s->ele[i].j,&s->ele[i].x);
    }
}

void display(struct SparseMatrix s)       //here we will just call the value as it's not going to change the values
{
    int k=0;
    for(int i=0;i<s.m;i++)
    {
        for(int j=0;j<s.n;j++)
        {
            if(i==s.ele[k].i && j==s.ele[k].j)
            printf("%d ",s.ele[k++].x);
            else
            printf("0 ");
        }
        printf("\n");
    }
}

int main()
{
    struct SparseMatrix s;
    create(&s);
    display(s);
    return 0;
}
*/

//Adding 2 sparse matrix
/*
struct Element       //creating struct for non-zero elements   -- c code
{
    int i;
    int j;
    int x;
};

struct SparseMatrix
{
    int m;
    int n;
    int num;
    struct Element *ele;      //pointer for make it dynamic
};

void create(struct SparseMatrix *s)     //for creating the sparse matrix   -- calling the refernce
{
    printf("Enter the dimension: ");
    scanf("%d %d",&s->m,&s->n);           //getting the number of rows and columns
    printf("Enter number of non-zeros present in it");
    scanf("%d",&s->num);

    s->ele=(struct Element *)malloc(s->num * sizeof(struct Element));

    printf("Enter the non-zero elements: ");
    for(int i=0;i<s->num;i++)
    {
        scanf("%d %d %d",&s->ele[i].i,&s->ele[i].j,&s->ele[i].x);
    }
}

void display(struct SparseMatrix s)       //here we will just call the value as it's not going to change the values
{
    int k=0;
    for(int i=0;i<s.m;i++)
    {
        for(int j=0;j<s.n;j++)
        {
            if(i==s.ele[k].i && j==s.ele[k].j)
            printf("%d ",s.ele[k++].x);
            else
            printf("0 ");
        }
        printf("\n");
    }
}

struct SparseMatrix *add(struct SparseMatrix *s1,struct SparseMatrix *s2)
{
    struct SparseMatrix *sum;      //we will take a pointer type object so that it will create inside a heap

    sum=(struct SparseMatrix*)malloc(sizeof(struct SparseMatrix));    //creating the object for sparse matrix
    sum->ele=(struct Element*)malloc((s1->num + s2->num)*sizeof(struct Element));

    int i,j,k;
    i=j=k=0;
    while(i<s1->num && j<s2->num)
    {
        if(s1->ele[i].i < s2->ele[j].i)
        sum->ele[k++]=s1->ele[i++];
        else if(s1->ele[i].i > s2->ele[j].i)
        sum->ele[k++]=s2->ele[j++];
        else
        {
            if(s1->ele[i].j<s2->ele[j].j)
            sum->ele[k++]=s1->ele[i++];
            else if(s1->ele[i].j > s2->ele[j].j)
            sum->ele[k++]=s2->ele[j++];
            else
            {
                sum->ele[k]=s1->ele[i];
                sum->ele[k++].x = s1->ele[i++].x + s2->ele[j++].x;
            }
        }
    }   

    for(;i<s1->num;i++)   //copying the rest of the elements from the fremaining matrix means from matrix 1 and matrix 2
    sum->ele[k++]=s1->ele[i];
    for(;j<s2->num;j++)
    sum->ele[k++]=s2->ele[j];

    sum->m=s1->m;       //mentioning the dimension for the matrix of sum
    sum->n=s2->n;
    sum->num=k;

    return sum;
}

int main()
{
    struct SparseMatrix s1,s2,*s3;
    create(&s1);
    create(&s2);
    s3=add(&s1,&s2);
    
    printf("First Matrix is: ");
    display(s1);
    printf("Second matrix is: ");
    display(s2);
    printf("Sum of these matrices will be");
    display(*s3);
    return 0;
}
*/

/*
class Element     //creating a sparsematrix and displaying it here  --c++ code
{
    public:
       int i;
       int j;
       int x;
};

class SparseMatrix
{
    private:
       int m;
       int n;
       int num;
       Element *ele;

    public:
        SparseMatrix(int m,int n,int num)
        {
            this->m=m;
            this->n=n;
            this->num=num;
            ele = new Element[this->num];
        }

    ~SparseMatrix()
    {
        delete[] ele;
    }

    void read()
    {
        cout<<"Enter non-zero elements: "<<endl;
        for(int i=0;i<num;i++)
        cin>>ele[i].i>>ele[i].j>>ele[i].x;
    }

    void display()
    {
        int k=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(ele[k].i==i && ele[k].j==j)
                cout<<ele[k++].x<<" ";
                else
                cout<<"0 ";
            }
            cout<<endl;
        }
    }
};

int main()
{
    SparseMatrix s1(5,5,5);
    s1.read();
    s1.display();

    return 0;
}
*/

/*
class Element     //creating a sparsematrix and displaying it here  --c++ code
{
    public:
       int i;
       int j;
       int x;
};

class SparseMatrix
{
    private:
       int m;
       int n;
       int num;
       Element *ele;

    public:
        SparseMatrix(int m,int n,int num)   //constructor
        {
            this->m=m;
            this->n=n;
            this->num=num;
            ele = new Element[this->num];    //destructor
        }

        ~SparseMatrix()
        {
            delete[] ele;
        }

        SparseMatrix operator+(SparseMatrix &s);          
        friend istream & operator>>(istream &is,SparseMatrix &s);  //extraction operator  --for reading 
        friend ostream & operator<<(ostream &os,SparseMatrix &s);  //insertion operator   --for displaying
};

SparseMatrix SparseMatrix::operator+(SparseMatrix &s)
{
    int i,j,k;
    if(m!=s.m || n!=s.n)
    {
        return SparseMatrix(0,0,0);
    }
    SparseMatrix *sum=new SparseMatrix(m,n,num+s.num);

    i=j=k=0;
    while(i<s.num && j<s.num)
    {
        if(ele[i].i<s.ele[j].i)
        sum->ele[k++]=ele[i++];
        else if(ele[i].i>s.ele[j].i)
        sum->ele[k++]=ele[j++];
        else
        {
            if(ele[i].j<ele[j].j)
            sum->ele[k++]=ele[i++];
            else if(ele[i].j > ele[j].j)
            sum->ele[k++]=ele[j++];
            else
            {
                sum->ele[k]=ele[i];
                sum->ele[k++].x = ele[i++].x + ele[j++].x;
            }
        }
    }

    for(;i<num;i++)   //copying the rest of the elements from the fremaining matrix means from matrix 1 and matrix 2
    sum->ele[k++]=ele[i];
    for(;j<num;j++)
    sum->ele[k++]=ele[j];

    sum->m=m;       //mentioning the dimension for the matrix of sum
    sum->n=n;
    sum->num=k;

    return *sum;
}

//for implementing insertion and extraction operator, we've to follow the rule for operator overloading
    istream & operator>>(istream &is,SparseMatrix &s)
    {
        cout<<"Enter non-zero elements: "<<endl;
        for(int i=0;i<s.num;i++)
        cin>>s.ele[i].i>>s.ele[i].j>>s.ele[i].x;
        return is;
    }

    ostream & operator<<(ostream &os,SparseMatrix &s)
    {
        int k=0;
        for(int i=0;i<s.m;i++)
        {
            for(int j=0;j<s.n;j++)
            {
                if(s.ele[k].i==i && s.ele[k].j==j)
                cout<<s.ele[k++].x<<" ";
                else
                cout<<"0 ";
            }
            cout<<endl;
        }
        return os;
    }


int main()
{
    SparseMatrix s1(5,5,5);
    SparseMatrix s2(5,5,5);
    cin>>s1;
    cin>>s2;

    SparseMatrix sum=s1+s2;

    cout<<"First Matrix is"<<endl<<s1;
    cout<<"Second Matrix is"<<endl<<s2;
    cout<<"Sum Matrix is "<<endl<<sum;

    return 0;
}
*/

/*
struct Term                   // Polynomial Representation  --c code
{
    int coeff;
    int exp;
};

struct Poly
{
    int n;
    struct Term *terms;   //since we don't know how many terms are there so we will store it in a dynamic manner
};

void create(struct Poly *p)
{
    printf("Number of terms: ");
    scanf("%d",&p->n);
    int i;

    p->terms=(struct Term*)malloc(p->n * (sizeof(struct Term)));

    printf("Enter the co-efficient and exponent values: ");
    for(i=0;i<p->n;i++)
    scanf("%d %d",&p->terms[i].coeff,&p->terms[i].exp);
}

void display(struct Poly p)
{
    int i;
    for(i=0;i<p.n;i++)
    printf("%dx%d+",p.terms[i].coeff,p.terms[i].exp);
    printf("\n");
}

int main()
{
    struct Poly p1;

    create(&p1);
    display(p1);

    return 0;
}
*/

struct Term
{
 int coeff;
 int exp;
};
struct Poly
{
 int n;
 struct Term *terms;
};
void create(struct Poly *p)
{
 int i;
 printf("Number of terms?");
 scanf("%d",&p->n);
 p->terms=(struct Term*)malloc(p->n*sizeof(struct
Term));
 
 printf("Enter terms\n");
 for(i=0;i<p->n;i++)
 scanf("%d%d",&p->terms[i].coeff,&p-
>terms[i].exp);
 
}
void display(struct Poly p)
{
 int i;
 for(i=0;i<p.n;i++)
 
printf("%dx%d+",p.terms[i].coeff,p.terms[i].exp);
 printf("\n");
}
struct Poly *add(struct Poly *p1,struct Poly *p2)
{
 int i,j,k;
 struct Poly *sum;
 
 sum=(struct Poly*)malloc(sizeof(struct Poly));
 sum->terms=(struct Term *)malloc((p1->n+p2->n)*sizeof(struct Term));
 i=j=k=0;
 
 while(i<p1->n && j<p2->n)
 {
 if(p1->terms[i].exp>p2->terms[j].exp)
 sum->terms[k++]=p1->terms[i++];
 else if(p1->terms[i].exp < p2->terms[j].exp)
 sum->terms[k++]=p2->terms[j++];
 else
 {
 sum->terms[k].exp=p1->terms[i].exp;
 sum->terms[k++].coeff=p1->terms[i++].coeff+p2->terms[j++].coeff;
 }
 }
 for(;i<p1->n;i++)sum->terms[k++]=p1->terms[i];
 for(;j<p2->n;j++)sum->terms[k++]=p2->terms[j];
 
 sum->n=k;
 return sum;
 
 
}
int main()
{
 struct Poly p1,p2,*p3;
 
 create(&p1);
 create(&p2);
 
 p3=add(&p1,&p2);
 
 printf("\n");
 display(p1);
 printf("\n");
 display(p2);
 printf("\n");
 display(*p3);
 
 
 return 0;
}

/*
    References:-
    DSA Udemy Course 162 
    
*/