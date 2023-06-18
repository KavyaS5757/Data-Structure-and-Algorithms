#include <stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int A[]={1,4,6,8,2,9};
    int l=A[0];
    int size=sizeof(A)/sizeof(A[0]);

    for(int i=0;i<size;i++)
    {
        if(A[0]>A[i])
        l=A[i];
    }
    
    int h=A[0];
    for(int i=0;i<size;i++)
    {
        if(A[0]<A[i])
        h=A[i];
    }

    int H[h-l] = {0};
    for(int i=0;i<size;i++)
    {
        H[A[i]]++;
    }
    
    for(int i=l;i<=h;i++)
    {
        if(H[i]==0)
        printf("%d\n",i);
    }
   
}