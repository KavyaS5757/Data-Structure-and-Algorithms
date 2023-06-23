#include <stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

/*
struct Matrix      //implementation of lower triangle in c language (Row - major mapping)
{
    int *A;
    int n;
};

void set(struct Matrix *m,int i,int j,int x)
{
    if(i>=j)
    {
        m->A[i*(i-1)/2+j-1]=x;
    }
}

int get(struct Matrix m,int i, int j)
{
    if (i>=j)
    {
        return m.A[i*(i-1)/2+j-1];
    }
    else
        return 0;
    
}

void display(struct Matrix m)
{
    int i,j;
    for(i=1;i<=m.n;i++)
    {
        for(j=1;j<=m.n;j++)
        {
            if(i>=j)
            printf("%d ",m.A[i*(i-1)/2+j-1]);
            else
            printf("0 ");
        }
        printf("\n");
    }
}
int main()
{
    struct Matrix m;
    int x;
    printf("Enter the dimension: ");
    scanf("%d",&m.n);

    m.A=(int *)malloc(m.n*(m.n+1)/2 * sizeof(int));

    printf("Enter all elements: ");
    for(int i=1;i<=m.n;i++)
    {
        for(int j=1;j<=m.n;j++)
        {
            scanf("%d",&x);
            set(&m,i,j,x);
        }
    }
    printf("\n\n");
    display(m);
    return 0;
}
*/

/*
struct matrix   //implementation of upper triangle using row-major mapping
{
    int *A;
    int n;
};

void set(struct matrix *m,int i,int j,int x)
{
    if(i<=j)
    {
        m->A[i*(i-1)/2+j-1]=x;
    }
}

int get(struct matrix m,int i,int j)
{
    if(i<=j)
    {
        return(m.A[i*(i-1)/2+j-1]);
    }
    else
    return 0;
}

void display(struct matrix m)
{
    for(int i=1;i<=m.n;i++)
    {
        for(int j=1;j<=m.n;j++)
        {
            if(i<=j)
            {
                printf("%d ",m.A[i*(i-1)/2+j-1]);
            }
            else
            printf("0 ");
        }
        printf("\n");
    }
}

int main()
{
    struct matrix m;
    int x;
    printf("Enter the size of the elements: ");
    scanf("%d",&m.n);

    m.A=(int *)malloc(m.n*(m.n+1)/2*sizeof(int));

    printf("Enter all elements: ");
    for(int i=1;i<=m.n;i++)
    {
        for(int j=1;j<=m.n;j++)
        {
            scanf("%d",&x);
            set(&m,i,j,x);
        }
    }
    printf("\n");
    display(m);
    return 0;
}
*/

/*
struct Matrix      //implementation of lower triangle in c language (column-major mapping)
{
    int *A;
    int n;
};

void set(struct Matrix *m,int i,int j,int x)
{
    if(i>=j)
    {
        m->A[m->n*(j-1)+(j-2)*(j-1)/2+i-j]=x;
    }
}

int get(struct Matrix m,int i, int j)
{
    if (i>=j)
    {
        return m.A[m.n*(j-1)+(j-2)*(j-1)/2+i-j];
    }
    else
        return 0;
    
}

void display(struct Matrix m)
{
    int i,j;
    for(i=1;i<=m.n;i++)
    {
        for(j=1;j<=m.n;j++)
        {
            if(i>=j)
            printf("%d ",m.A[m.n*(j-1)+(j-2)*(j-1)/2+i-j]);
            else
            printf("0 ");
        }
        printf("\n");
    }
}
int main()
{
    struct Matrix m;
    int x;
    printf("Enter the dimension: ");
    scanf("%d",&m.n);

    m.A=(int *)malloc(m.n*(m.n+1)/2 * sizeof(int));

    printf("Enter all elements: ");
    for(int i=1;i<=m.n;i++)
    {
        for(int j=1;j<=m.n;j++)
        {
            scanf("%d",&x);
            set(&m,i,j,x);
        }
    }
    printf("\n\n");
    display(m);
    return 0;
}
*/

/*
struct matrix   //implementaion of upper triangle in c by column wise mapping
{
    int *A;
    int n;
};

void set(struct matrix *m,int i, int j,int x)
{
    if(i<=j)
    {
        m->A[j * (j - 1) / 2 + (i - 1)]=x;
    }
}

int get(struct matrix m,int i, int j)
{
    if(i<=j)
    return m.A[j * (j - 1) / 2 + (i - 1)];
    else
    return 0;
}

void display(struct matrix m)
{
    for(int i=1;i<=m.n;i++)
    {
        for(int j=1;j<=m.n;j++)
        {
            if(i<=j)
            printf("%d ",m.A[j * (j - 1) / 2 + (i - 1)]);
            else
            printf("0 ");
        }
        printf("\n");
    }
    
}

int main()
{
    struct matrix m;
    int x;
    printf("Enter the size of the elements: ");
    scanf("%d",&m.n);

    m.A=(int *)malloc(m.n*(m.n+1)/2 *(sizeof(int)));
    printf("Enter all the elements: ");
    for(int i=1;i<=m.n;i++)
    {
        for(int j=1;j<=m.n;j++)
        {
            scanf("%d",&x);
            set(&m,i,j,x);
        }
    }
    printf("\n");
    display(m);
    return 0;
}
*/
/*
class LowerTri   //by row-wise mapping
{
    private:
        int *A;
        int n;
    public:
        LowerTri()
        {
            n=2;
            A=new int[2*(2+1)/2];
        }
        LowerTri(int n)
        {
            this->n=n;
            A=new int[n*(n+1)/2];
        }
        ~LowerTri()
        {
            delete []A;
        }

        void set(int i,int j,int x);
        int get(int i, int j);
        void display();
        int GetDimension(){return n;};
};

void LowerTri::set(int i,int j,int x)
{
    if(i>=j)
    A[i*(i-1)/2 + j-1]=x;
}

int LowerTri::get(int i, int j)
{
    if(i>=j)
    return A[i*(i-1)/2 + j-1];  
    return 0;
}

void LowerTri::display()
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if (i>=j)
            {
                cout<<A[i*(i-1)/2 + j-1]<<" ";
            }
            else
            cout<<"0 ";
        }
        cout<<endl;
    }
}

int main()
{
    int d;
    cout<<"Enter Dimension: ";
    cin>>d;

    LowerTri l(d);
    int x;
    for(int i=1;i<=d;i++)
    {
        for(int j=1;j<=d;j++)
        {
            cin>>x;
            l.set(i,j,x);
        }
    }
    l.display();
    return 0;
}
*/

/*
class uppertri      //c++ program by row-wise mapping
{
    private:    //accessible to function and its friend function
        int *A;
        int n;
    public:
        uppertri()      //accessible in a restricted mode
        {
            n=2;
            A=new int(2*(2+1)/2);
        }
        uppertri(int n)      //accessible in a restricted mode
        {
            this->n=n;
            A=new int[n*(n+1)/2];
        }
        ~uppertri()
        {
            delete[]A;
        }

        void set(int i, int j,int x);
        int get(int i,int j);
        void display();
        int getdimension(){return n;};
};

void uppertri::set(int i, int j,int x)
{
    if(i<=j)
    A[(i*(i-1)/2) + (j-1)]=x;
}

int uppertri::get(int i,int j)
{
    if(i<=j)
    return i*(i-1)/2 + (j-1);
    else
    return 0;
}

void uppertri::display()
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i<=j)
            cout<<A[i*(i-1)/2 +(j-1)]<<" ";
            else
            cout<<"0 ";
        }
        cout<<endl;
    }
}

int main()
{
    int d;
    cout<<"Enter the dimension: ";
    cin>>d;
    
    uppertri u(d);

    int x;
    cout<<"Enter all the elements: "<<endl;
    for(int i=1;i<=d;i++)
    {
        for(int j=1;j<=d;j++)
        {
            cin>>x;
            u.set(i,j,x);
        }
    }
    u.display();
    return 0;
}
*/
 
class uppertri    //c++ program in column-wiae mapping
{
    private:
        int *A;
        int n;
    public:
        uppertri()
        {
            n=2;
            A=new int[2*(2+1)/2];
        }
        uppertri(int n)
        {
            this->n=n;
            A=new int[n*(n+1)/2];
        }
        ~uppertri()
        {
            delete[]A;
        }
        int getdimension()
        {
            return n;
        }

        void set(int i, int j, int x);
        int get(int i, int j);
        void display();
};

void uppertri::set(int i,int j,int x)
{
    if(i<=j)
    A[j*(j-1)/2 +(i-1)]=x;
}

int uppertri::get(int i, int j)
{
    if(i<=j)
    return j*(j-1)/2 + (i-1);
    return 0;
}

void uppertri::display()
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i<=j)
            cout<<A[j*(j-1)/2 +(i-1)]<<" ";
            else
            cout<<"0 ";
        }
        cout<<endl;
    }
}

int main()
{
    int d;
    cout<<"Enter the size of the elements: "<<endl;
    cin>>d;

    uppertri u(d);

    int x;
    cout<<"Enter all elements: "<<endl;
    for(int i=1;i<=d;i++)
    {
        for(int j=1;j<=d;j++)
        {
            cin>>x;
            u.set(i,j,x);
        }
    }
    u.display();
    return 0;
}
//references:-
/*
https://www.youtube.com/watch?v=uYXrJlz8rek  -- for private, protected and public classes
DSA udemy course
*/
