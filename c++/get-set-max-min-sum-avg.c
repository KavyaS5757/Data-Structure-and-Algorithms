#include <stdio.h>

struct Array
{
    int *A;
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;
    printf("\nElements are: \n");
    for(i=0;i<arr.length;i++)
    printf("%d\n",arr.A[i]);
}

void Append(struct Array *arr,int x)
{
    if(arr->length<arr->size)
    arr->A[arr->length++]=x;
}

void Insert(struct Array *arr, int index, int x)
{
    int i;
    if(index>=0 && index<=arr->length)
    {
        for(i=arr->length;i>index;i--)
        {
            arr->A[i]=arr->A[i-1];
        }
        arr->A[index]=x;
    }
}

int Delete(struct Array *arr,int index)
{
    int i=0;
    if(index>=0 && index<=arr->length)
    {
        i=arr->A[index];
        for(int j=index;j<arr->length-1;j++)
        {
            arr->A[j]=arr->A[j+1];
        }
        arr->length--;
        return i;
    }
}

void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int LinearSearch(struct Array arr,int key)
{
    for(int i=0;i<arr.length;i++)
    {
        if(arr.A[i]==key)
        return i;
    }
    return -1;
}

int transposition(struct Array *arr,int key)
{
    for(int i=0;i<arr->length;i++)
    {
        if(key==arr->A[i])
        {
            swap(&arr->A[i],&arr->A[i-1]);
            return i;
        }
    }
    return -1;
}

int head(struct Array *arr,int key)  //move to head or front
{
    for(int i=0;i<arr->length;i++)
    {
        if(key==arr->A[i])
        {
            swap(&arr[i],0);
            return i;
        }
    }
    return -1;
}

int BinarySearch(struct Array arr,int key)
{
    int l,h,mid;
    l=0;
    h=arr.length-1;
    while(l<=h)
    {
        mid = (l+h)/2;
        if(key == arr.A[mid])
        return mid;
        else if(key < arr.A[mid])
        h=mid-1;
        else
        l=mid+1;
    }
    return -1;
}

int RBinSearch(int a[],int l,int h,int key)
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

int Get(struct Array arr,int index)
{
    if(index>=0 && index<arr.length)
    return arr.A[index];
    return -1;
}

void Set(struct Array *arr,int index, int x)
{
    if(index>=0 && index<arr->length)
    {
        arr->A[index]=x;
    }
}

int Max(struct Array arr)
{
    int max=arr.A[0];
    for(int i=0;i<arr.length;i++)
    {
        if(arr.A[i]>max)
        max=arr.A[i];
    }
    return max;
}

int Min(struct Array arr)
{
    int min=arr.A[0];
    for(int i=0;i<arr.length;i++)
    {
        if(arr.A[i]<min)
        min=arr.A[i];
    }
    return min;
}

int Sum(struct Array arr)
{
    int sum=0;
    for(int i=0;i<arr.length;i++)
    {
        sum+=arr.A[i];
    }
    return sum;
}

float Avg(struct Array arr)
{
    return (float)(Sum(arr)/arr.length);
}

int main()
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
    
    
    Display(arr);
    printf("%d\n",Get(arr,3));
    Set(&arr,2,19);
    Display(arr);
    printf("%d\n",Max(arr));
    printf("%d\n",Min(arr));
    printf("%d\n",Sum(arr));
    printf("%.2f\n",Avg(arr));

    return 0;
    
}