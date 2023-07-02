#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);
char** split_string(char*);

int parse_int(char*);

/*
 * Complete the 'hourglassSum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */


/*
int main()      //--c code
{
    int i,j;
    int arr[6][6],temp=-9999,a;
    
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
        {
            a=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
            if(temp<a)
            temp=a;
        }
    }
    
    printf("%d",temp);
    return 0;
}
*/

#include <bits/stdc++.h>       -- c++14 code
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<vector>
#include<iostream>

using namespace std;


string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);


/* 
    Here we are going to solve one of the hackerrank problem
    This problem is about 2D arrays --hourgalss problem

*/

int main()
{
   int a[6][6],s;
   int m=INT_MIN;
   
   for(int i=0;i<6;i++)
   {
       for(int j=0;j<6;j++)
       {
           cin>>a[i][j];
       }
   }
   
   for(int i=0;i<4;i++)
   {
       for(int j=0;j<4;j++)
       {
           s=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
           
           if (s>m)
           m=s;
       }
   }
   cout<<m;
   return 0;
}


