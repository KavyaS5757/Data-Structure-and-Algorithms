#include <stdio.h>
#include<iostream>
using namespace std;

/*
int main()  //for consecutive elements starting from 0
{
    int A[]={1,2,3,4,6,7,8,9};
    int size = sizeof(A)/sizeof(A[0]);
    int sum = 0;
    for(int i=0;i<size-1;i++)
    {
        sum+=A[i];
    }
    int n=A[size-1];
    int s=(n*(n-1))/2;
    printf("Missing element is %d\n",s-sum);
}
*/

int main()         //Continuous consecutive numbers starting from any number
{
    int A[1000],size;
    printf("Enter the size of the elements: ");
    scanf("%d",&size);
    printf("Enter the elements of the array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&A[i]);
    }

    int l,h;
    l=A[0];
    h=A[size-1];
    int diff=l-0;
    for(int i=0;i<size;i++)
    {
        if((A[i]-i)!=diff)
        {
            printf("Missing element is %d",i+diff);
            break;
        }
    }
}