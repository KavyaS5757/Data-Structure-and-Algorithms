#include <stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int a[]={5,8,3,9,6,2,10,7,-1,4};
    int size=sizeof(a)/sizeof(a[0]);
    int l=a[0];
    int h=a[0];

    for(int i=0;i<size;i++)
    {
        if(a[i]<l)
        l=a[i];
        else if(a[i]>h)
        h=a[i];
    }
}