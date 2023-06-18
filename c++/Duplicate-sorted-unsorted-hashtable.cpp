#include <stdio.h>
#include<iostream>
using namespace std;

/*
int main()    //finding duplicates in a sorted array
{
    int arr[]={3,6,8,8,10,12,15,15,15,20};
    int lastDuplicate = 0;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++)
    {
        if(arr[i]==arr[i+1] && arr[i]!=lastDuplicate)
        {
            printf("%d\n",arr[i]);
            lastDuplicate=arr[i];
        }
        
    }

    for(int i=0;i<size;i++)
    {
        if(arr[i]==arr[i+1])
        {
            int j=i+1;
            while(arr[j]==arr[i])
            j++;
            printf("%d is repeating %d times\n",arr[i],j-i);
            i=j-1;
        }
    }
    
}

*/


int main()         //finding duplicates in a sorted & an unsorted array using hash table
{
    int arr[]={8,3,6,4,6,5,6,8,2,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    int l=0;
    int h=0;
    
    for(int i=0;i<size;i++)
    {
        if(arr[i]<l)
        l=arr[i];
    }

    for(int i=0;i<size;i++)
    {
        if(arr[i]>h)
        h=arr[i];
    }

    int H[(h-l)+1]={0};

    for(int i=0;i<size;i++)
    {
        H[arr[i]]++;
    }

    int n=sizeof(H)/sizeof(H[0]);
    

    for(int i=1;i<=n;i++)
    {
        if(H[i]>1)
        printf("%d is repeating %d times\n",i,H[i]);
    }
}


/*
int main()      //finding duplicates in an unsorted array
{
    int arr[]={8,3,6,4,6,5,6,8,2,7};
    int size=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<=size;i++)
    {
        int count=1;
        if(arr[i]!=-1)
        {
            for(int j=i+1;j<size;j++)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                    arr[j]=-1;
                }
            }
            if(count>1)
            printf("%d is repeating, %d times\n",arr[i],count);
        }
    }
}
*/

