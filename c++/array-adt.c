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
    
    Insert(&arr, 2, 7);
    Append(&arr,10);
    Delete(&arr,3);
    Display(arr);

    return 0;
}