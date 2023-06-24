#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i;
    scanf("%d\n",&n);
    char str[n];
    fgets(str, n, stdin);
    int H[26]={0};
    
    for(i=0;str[i]!='\0';i++)
    {
        H[str[i]-97]+=1;
    }
    int max=H[0];
    for(int j=0;j<26;j++)
    {
        if(H[j]>max && H[j]>1)
        {
            max=H[i];
        }
    }
    printf("%d\n",max);
    return 0;
}