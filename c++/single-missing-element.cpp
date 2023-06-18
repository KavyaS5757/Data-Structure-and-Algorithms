#include <stdio.h>
#include<iostream>
using namespace std;

int main()
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