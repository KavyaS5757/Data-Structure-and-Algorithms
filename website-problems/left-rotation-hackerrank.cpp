
/*
#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()        // --c code
{
    int n,r;
    scanf("%d %d",&n,&r);
    
    int arr[n];
    int temp[n];
    int k=0;
    
    for(int i=0;i<n;i++)
    {
        scanf("%d ",&arr[i]);
    }
    for(int i=r;i<n;i++)
    {
        temp[k]=arr[i];
        k++;
    }
    for(int i=0;i<r;i++)
    {
        temp[k]=arr[i];
        k++;
    }
    
    
    
    for(int i=0;i<n;i++)
    {
        printf("%d ",temp[i]);
    }
    
    return 0;
}
*/

#include <bits/stdc++.h>

using namespace std;     // --c++ code

int main()
{
    int n,r;
    cin>>n>>r;
    int start=n-r;
    int *arr=new int[n];
    
    for(int i=0;i<n;i++)
    {
        if(start==n)
        start=0;
        cin>>arr[start++];
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}