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

void Reverse(struct Array *arr)
{
    int *B;
    int i,j;
    B=(int*)malloc(arr->length*sizeof(int));
    for(i=arr->length, j=0;i>=0;i--,j++)
    {
        B[j]=arr->A[i];
    }
    for(i=0;i<arr->length;i++)
    {
        arr->A[i]=B[i];
    }
}

void Reverse2(struct Array *arr)  //using swapping method
{
    int i,j;
    for(i=0,j=arr->length-1;i<j;i++,j--)
    {
        swap(&arr->A[i],&arr->A[j]);
    }
}

void InsertSort(struct Array *arr,int x)
{
    int i=arr->length-1;
    if(arr->length==arr->size)
    return;
    while (i>0 && arr->A[i]>x)
    {
        arr->A[i+1]=arr->A[i];
        i--;
    }
    arr->A[i]=x;
    arr->length++;
}

int isSorted(struct Array arr)
{
    for(int i=0;i<arr.length;i++)
    {
        if(arr.A[i]>arr.A[i+1])
        return 0;
    }
    return 1;
}

void Rearrange(struct Array *arr)
{
    int i,j;
    i=0;
    j=arr->length-1;

    while (i<j)
    {
        while(arr->A[i]<0)i++;
        while(arr->A[i]>=0)j--;
        if(i<j)swap(&arr->A[i],&arr->A[j]); 
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

struct Array* Merge(struct Array *arr1,struct Array *arr2)
{
    int i,j,k;
    i=j=k=0;
    struct Array *arr3=(struct Array*)malloc(sizeof(struct Array));

    while (i<arr1->length && j<arr2->length)
    {
        if(arr1->A[i]<arr2->A[j])
        arr3->A[k++]=arr1->A[i++];
        else
        arr3->A[k++]=arr2->A[j++];
    }

    for(;i<arr1->length;i++)
    arr3->A[k++]=arr1->A[i];
    for(;j<arr2->length;j++)
    arr3->A[k++]=arr2->A[j];
    arr3->length=arr1->length+arr2->length;
    arr3->size=10;

    return arr3;    
    
}

struct Array* Union(struct Array *arr1,struct Array *arr2)
{
    int i,j,k;
    i=j=k=0;
    struct Array *arr3=(struct Array*)malloc(sizeof(struct Array));

    while (i<arr1->length && j<arr2->length)
    {
        if(arr1->A[i]<arr2->A[j])
        arr3->A[k++]=arr1->A[i++];
        else if(arr2->A[j]<arr1->A[i])
        arr3->A[k++]=arr2->A[j++];
        else
        {
            arr3->A[k++]=arr1->A[i++];
            j++;
        }
    }

    for(;i<arr1->length;i++)
    arr3->A[k++]=arr1->A[i];
    for(;j<arr2->length;j++)
    arr3->A[k++]=arr2->A[j];
    arr3->length=k;
    arr3->size=10;

    return arr3;    
}

struct Array* Intersection(struct Array *arr1,struct Array *arr2)
{
    int i,j,k;
    i=j=k=0;
    struct Array *arr3=(struct Array*)malloc(sizeof(struct Array));

    while (i<arr1->length && j<arr2->length)
    {
        if(arr1->A[i]<arr2->A[j])
        i++;
        else if(arr2->A[j]<arr1->A[i])
        j++;
        else if(arr1->A[i]==arr2->A[j])
        {
            arr3->A[k++]=arr1->A[i++];
            j++;
        }
    }

    arr3->length=k;
    arr3->size=10;

    return arr3;    
    
}

struct Array* Difference(struct Array *arr1,struct Array *arr2)
{
    int i,j,k;
    i=j=k=0;
    struct Array *arr3=(struct Array*)malloc(sizeof(struct Array));

    while (i<arr1->length && j<arr2->length)
    {
        if(arr1->A[i]<arr2->A[j])
        arr3->A[k++]=arr1->A[i++];
        else if(arr2->A[j]<arr1->A[i])
        j++;
        else
        {
            i++;
            j++;
        }
    }

    for(;i<arr1->length;i++)
    arr3->A[k++]=arr1->A[i];
    
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
    struct Array arr1;
    printf("Enter the size of the array:");
    scanf("%d",&arr1.size);
    arr1.A=(int *)malloc(arr1.size*sizeof(int));
    int ch;
    int x,index;

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
        Insert(&arr1,index,x);
        break;

    case 2: 
        printf("Enter Index");
        scanf("%d",&index);
        Delete(&arr1,index);
        printf("Deleted element is %d\n",x);
        break;

    case 3: 
        printf("Enter element to search");
        scanf("%d",&x);
        LinearSearch(arr1,x);
        break;

    case 4: 
        printf("Sum is %d\n",Sum(arr1));
        break;

    case 5: 
        Display(arr1);

    default:
        break;
    }
    }while (ch<6);
    
}