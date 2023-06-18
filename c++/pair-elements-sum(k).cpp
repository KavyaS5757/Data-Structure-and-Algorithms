#include <stdio.h>
#include<iostream>
using namespace std;

/*
int main()  //sum of a+b=k
{
    int arr[]={6,3,8,10,16,7,5,2,9,14};
    int size= sizeof(arr)/sizeof(arr[0]);
    int k;
    printf("Enter the sum: ");
    scanf("%d",&k);

    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]+arr[j] == k)
            printf("%d + %d will give %d\n",arr[i],arr[j],k);
        }
    }
}
*/

/*
int main()     // in an unsorted array- finding out the sum of a+b=k
{
    int arr[]={6,3,8,10,16,7,5,2,9,14};
    int size= sizeof(arr)/sizeof(arr[0]);
    int k;
    printf("Enter the sum: ");
    scanf("%d",&k);

    int l=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]<l)
        l=arr[i];
    }

    int h=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>h)
        h=arr[i];
    }

    int H[h-l]={0};
    int n=(sizeof(H)/sizeof(H[0]));
    
    for(int i=0;i<n;i++)
    {
        if(H[k-arr[i]]!=0 && k-arr[i] >0)
        printf("%d + %d = %d\n",arr[i],k-arr[i],k);
        H[arr[i]]++;
    }
}
*/

int main()     //sum a+b=k using sorted array
{
    int a[]={1,3,4,5,6,8,9,10,12,14};
    int size=sizeof(a)/sizeof(a[0]);
    int k;
    printf("Enter the sum which you required: ");
    scanf("%d",&k);
    int i=0;
    int j=size-1;

    while(i<j)       //for(i=0,j=n-1;i<j;) -> we can use this also 
    {
        if(a[i]+a[j]==k)
        {
            printf("%d + %d = %d\n",a[i],a[j],k);
            i++;
            j--;
        }
        else if(a[i]+a[j]<k)
        {
            i++;
        }
        else
        j--;
    }
}