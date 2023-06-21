#include <stdio.h>
#include<iostream>
using namespace std;
/*
struct Matrix      //implemnetation of diagonal matrix using c
{
    int A[10];
    int n;
};

void set(struct Matrix *m,int i,int j,int x)
{
    if(i==j)
    {
        m->A[i-1]=x;
    }
}

int get(struct Matrix m,int i, int j)
{
    if (i==j)
    {
        return m.A[i-1];
    }
    else
        return 0;
    
}

void display(struct Matrix m)
{
    int i,j;
    for(i=0;i<m.n;i++)
    {
        for(j=0;j<m.n;j++)
        {
            if(i==j)
            printf("%d ",m.A[i]);
            else
            printf("0 ");
        }
        printf("\n");
    }
}
int main()
{
    struct Matrix m;
    m.n=4;

    set(&m,1,1,5);
    set(&m,2,2,8);
    set(&m,3,3,9);
    set(&m,4,4,12);

    printf("%d \n",get(m,3,2));
    display(m);
    return 0;
}
*/

class Diagonal
{
    private:
        int *A;
        int n;
    public:
        Diagonal()
        {
            n=2;
            A=new int[2];
        }
        Diagonal(int n)
        {
            this->n=n;
            A=new int[n];
        }
        ~Diagonal()
        {
            delete []A;
        }

        void set(int i,int j,int x);
        int get(int i, int j);
        void display();
};

void Diagonal::set(int i,int j,int x)
{
    if(i==j)
    A[i-1]=x;
}

int Diagonal::get(int i, int j)
{
    if(i==j)
    return A[i-1];  
    return 0;
}

void Diagonal::display()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if (i==j)
            {
                cout<<A[i]<<" ";
            }
            else
            cout<<"0 ";
        }
        cout<<endl;
    }
}

int main()
{
    Diagonal d(4);

    d.set(1,1,5);
    d.set(2,2,8);
    d.set(3,3,9);
    d.set(4,4,12);

    d.get(1,2);
    d.display();
    return 0;
}