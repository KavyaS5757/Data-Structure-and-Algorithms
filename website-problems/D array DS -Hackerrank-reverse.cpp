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

/*
char* readline();
char* ltrim(char*);
char* rtrim(char*);
char** split_string(char*);

int parse_int(char*);
 

int main()      //--c code
{ 
    int n,i,j,temp;;
    scanf("%d",&n);
    int A[10000];
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    
    for(j=n-1;j>-1;j--)
    {
        printf("%d ",A[j]);
    }
     
}
*/

#include <bits/stdc++.h>    //--c++14 code

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'reverseArray' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY a as parameter.
 */

int main()
{
    int n,i;
    cin>>n;
    int A[10000];
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    
    for(i=n-1;i>-1;i--)
    {
        cout<<A[i]<<" ";
    }
    
    return 0;
}