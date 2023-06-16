#include <stdio.h>
#include<iostream>
#include<stdlib.h>

class Array
{
private:
    int *A;
    int size;
    int length;
    void swap(int *x,int *y);

public:
    Array()
    {
        size=10;
        length=0;
        A=new int[size];
    }
    Array(int sz)
    {
        size=sz;
        length=0;
        A=new int[size];
    }
    ~Array()
    {
        delete []A;
    }

void Display();
void Append(int x);
void Insert(int index, int x);
int Delete(int index);
int LinearSearch(int key);
int transposition(int key);
int head(int key);
int BinarySearch(int key);
//int RBinSearch(int a[],int l,int h,int key);
int Get(int index);
void Set(int index, int x);
int Max();
int Min();
int Sum();
float Avg();
void Reverse();
void Reverse2();
void InsertSort(int x);
int isSorted();
void Rearrange();
Array* Merge(Array arr2);
Array* Union(Array arr2);
Array* Intersection(Array arr2);
Array* Difference(Array arr2);
};

void Array::Display()
{
    int i;
    printf("\nElements are: \n");
    for(i=0;i<length;i++)
    printf("%d\n",A[i]);
}

void Array::Append(int x)
{
    if(length<size)
    A[length++]=x;
}

void Array::Insert(int index, int x)
{
    int i;
    if(index>=0 && index<=length)
    {
        for(i=length;i>index;i--)
        {
            A[i]=A[i-1];
        }
        A[index]=x;
    }
}

int Array::Delete(int index)
{
    int i=0;
    if(index>=0 && index<=length)
    {
        i=A[index];
        for(int j=index;j<length-1;j++)
        {
            A[j]=A[j+1];
        }
        length--;
        return i;
    }
}

void Array::swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int Array::LinearSearch(int key)
{
    for(int i=0;i<length;i++)
    {
        if(A[i]==key)
        return i;
    }
    return -1;
}

int Array::transposition(int key)
{
    for(int i=0;i<length;i++)
    {
        if(key==A[i])
        {
            swap(&A[i],&A[i-1]);
            return i;
        }
    }
    return -1;
}

int Array::head(int key)  //move to head or front
{
    for(int i=0;i<length;i++)
    {
        if(key==A[i])
        {
            swap(&A[i],0);
            return i;
        }
    }
    return -1;
}

int Array::BinarySearch(int key)
{
    int l,h,mid;
    l=0;
    h=length-1;
    while(l<=h)
    {
        mid = (l+h)/2;
        if(key == A[mid])
        return mid;
        else if(key < A[mid])
        h=mid-1;
        else
        l=mid+1;
    }
    return -1;
}

/*int Array::RBinSearch(int a[],int l,int h,int key)
{
    int mid;
    if(l<=h)
    {
        mid=(l+h)/2;
        if(key==a[mid])
        return mid;
        else if(key<a[mid])
        return RBinSearch(a,l,mid-1,key);
        else
        return RBinSearch(a,mid+1,h,key);
    }
    return -1;
}

/*int main()
{
    struct Array arr;
    int n,i;
    printf("Enter the size of the array: ");
    scanf("%d",&arr.size);
    arr.A = (int *)malloc(arr.size*sizeof(int));
    arr.length=0;

    printf("Enter number of numbers");
    scanf("%d",&n);

    printf("Enter all elements \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr.A[i]);
    }
    arr.length=n;
    
    Display(arr);
    //printf("%d\n",LinearSearch(arr,5));
    //printf("%d\n",transposition(&arr,3));
    //printf("%d\n",head(&arr,3));
    printf("%d\n",BinarySearch(arr,6));

    return 0;
} 

*/

int Array::Get(int index)
{
    if(index>=0 && index<length)
    return A[index];
    return -1;
}

void Array::Set(int index, int x)
{
    if(index>=0 && index<length)
    {
        A[index]=x;
    }
}

int Array::Max()
{
    int max=A[0];
    for(int i=0;i<length;i++)
    {
        if(A[i]>max)
        max=A[i];
    }
    return max;
}

int Array::Min()
{
    int min=A[0];
    for(int i=0;i<length;i++)
    {
        if(A[i]<min)
        min=A[i];
    }
    return min;
}

int Array::Sum()
{
    int sum=0;
    for(int i=0;i<length;i++)
    {
        sum+=A[i];
    }
    return sum;
}

float Array::Avg()
{
    return (float)(Sum()/length);
}

void Array::Reverse()
{
    int *B;
    int i,j;
    B=(int*)malloc(length*sizeof(int));
    for(i=length, j=0;i>=0;i--,j++)
    {
        B[j]=A[i];
    }
    for(i=0;i<length;i++)
    {
        A[i]=B[i];
    }
}

void Array::Reverse2()  //using swapping method
{
    int i,j;
    for(i=0,j=length-1;i<j;i++,j--)
    {
        swap(&A[i],&A[j]);
    }
}

void Array::InsertSort(int x)
{
    int i=length-1;
    if(length==size)
    return;
    while (i>0 && A[i]>x)
    {
        A[i+1]=A[i];
        i--;
    }
    A[i]=x;
    length++;
}

int Array::isSorted()
{
    for(int i=0;i<length;i++)
    {
        if(A[i]>A[i+1])
        return 0;
    }
    return 1;
}

void Array::Rearrange()
{
    int i,j;
    i=0;
    j=length-1;

    while (i<j)
    {
        while(A[i]<0)i++;
        while(A[i]>=0)j--;
        if(i<j)swap(&A[i],&A[j]); 
    }
    
}

/*int main()
{
    struct Array arr;
    int n,i;
    printf("Enter the size of the array: ");
    scanf("%d",&arr.size);
    arr.A = (int *)malloc(arr.size*sizeof(int));
    arr.length=0;

    printf("Enter number of numbers");
    scanf("%d",&n);

    printf("Enter all elements \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr.A[i]);
    }
    arr.length=n;
    //printf("%d\n",RBinSearch(arr.A,0,arr.length,10));
    
    
   /* Display(arr);
    printf("%d\n",Get(arr,3));
    Set(&arr,2,19);
    Display(arr);
    printf("%d\n",Max(arr));
    printf("%d\n",Min(arr));
    printf("%d\n",Sum(arr));
    printf("%.2f\n",Avg(arr));

    return 0;
    */
  // Reverse2(&arr);

   /*Display(arr);
   InsertSort(&arr,0);
   Display(arr);
   printf("%d\n",isSorted(arr));

   Rearrange(&arr);
   Display(arr);
}*/

Array *Array::Merge(Array arr2)
{
    int i,j,k;
    i=j=k=0;
    Array *arr3=new Array(length +arr2.length);

    while (i<length && j<arr2.length)
    {
        if(A[i]<arr2.A[j])
        arr3->A[k++]=A[i++];
        else
        arr3->A[k++]=arr2.A[j++];
    }

    for(;i<length;i++)
    arr3->A[k++]=A[i];
    for(;j<arr2.length;j++)
    arr3->A[k++]=arr2.A[j];
    arr3->length=length+arr2.length;
    arr3->size=10;

    return arr3;    
    
}

Array *Array::Union(Array arr2)
{
    int i,j,k;
    i=j=k=0;
    struct Array *arr3=(struct Array*)malloc(sizeof(struct Array));

    while (i<length && j<arr2.length)
    {
        if(A[i]<arr2.A[j])
        arr3->A[k++]=A[i++];
        else if(arr2.A[j]<A[i])
        arr3->A[k++]=arr2.A[j++];
        else
        {
            arr3->A[k++]=A[i++];
            j++;
        }
    }

    for(;i<length;i++)
    arr3->A[k++]=A[i];
    for(;j<arr2.length;j++)
    arr3->A[k++]=arr2.A[j];
    arr3->length=k;
    arr3->size=10;

    return arr3;    
}

Array *Array::Intersection(struct Array arr2)
{
    int i,j,k;
    i=j=k=0;
    struct Array *arr3=(struct Array*)malloc(sizeof(struct Array));

    while (i<length && j<arr2.length)
    {
        if(A[i]<arr2.A[j])
        i++;
        else if(arr2.A[j]<A[i])
        j++;
        else if(A[i]==arr2.A[j])
        {
            arr3->A[k++]=A[i++];
            j++;
        }
    }

    arr3->length=k;
    arr3->size=10;

    return arr3;    
    
}

Array *Array::Difference(Array arr2)
{
    int i,j,k;
    i=j=k=0;
    struct Array *arr3=(struct Array*)malloc(sizeof(struct Array));

    while (i<length && j<arr2.length)
    {
        if(A[i]<arr2.A[j])
        arr3->A[k++]=A[i++];
        else if(arr2.A[j]<A[i])
        j++;
        else
        {
            i++;
            j++;
        }
    }

    for(;i<length;i++)
    arr3->A[k++]=A[i];
    
    arr3->length=k;
    arr3->size=10;

    return arr3;    
}

/*int main()
{
    struct Array arr1={{2,6,10,15,25},10,5};
    struct Array arr2={{3,4,7,18,20},10,5};
    struct Array *arr3;

    //arr3=Union(&arr1,&arr2);
    //arr3=Intersection(&arr1,&arr2);
    arr3=Difference(&arr1,&arr2);
    Display(*arr3);

    return 0;
}
*/

int main()
{
    Array *arr1;
    int ch,sz;
    int x,index;
    printf("Enter the size of the array:");
    scanf("%d",&sz);
    arr1=new Array(sz);

    do
    {
    printf("Menu\n");
    printf("1.Insert\n");
    printf("2.Delete\n");
    printf("3.Search\n");
    printf("4.Sum\n");
    printf("5.Display\n");
    printf("6.Exit\n");

    printf("Enter your Choice: ");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1: 
        printf("Enter an element and index");
        scanf("%d %d",&x,&index);
        arr1->Insert(index,x);
        break;

    case 2: 
        printf("Enter Index");
        scanf("%d",&index);
        x=arr1->Delete(index);
        printf("Deleted element is %d\n",x);
        break;

    case 3: 
        printf("Enter element to search");
        scanf("%d",&x);
        index=arr1->LinearSearch(x);
        break;

    case 4: 
        printf("Sum is %d\n",arr1->Sum());
        break;

    case 5: 
        arr1->Display();

    default:
        break;
    }
    }while (ch<6);
    
}