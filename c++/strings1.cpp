#include <stdio.h>
#include<iostream>
#include <string.h>
using namespace std;

/*
int main()   //Getting the length of the string
{
    char S[]={"Welcome"};
    int i;
    for(i=0;S[i]!=0;i++)
    {
    }
    printf("%d",i);
}
*/

/*
int main()                  //changing the case
                            //for capital letters ascii range is 65 to 90
                            //for small letters ascii range is from 97 to 122
{
    char S[]={"WELCOME"};
    int i;
    for(i=0;S[i]!=0;i++)
    {
        S[i]+=32;       
    }                       
    printf("%s",S);     
}
*/

/*
int main()                  //toggle the case
{
    char A[]={"We5LComE"};
    int i;
    for(i=0;A[i]!=0;i++)
    {
        if(A[i]>=65 && A[i]<=90)
        A[i]+=32;
        else if(A[i]>=97 && A[i]<=122)
        A[i]-=32;
    }
    printf("%s",A);
}
*/

/*
int main()     //counting number of vowels and consonants
{
    char A[]={"How are You..?"};
    int vcount=0;
    int ccount=0;
    for(int i=0;A[i]!=0;i++)
    {
        if(A[i]=='A' || A[i]=='E' || A[i]=='I' || A[i]=='O' || A[i]=='U' || A[i]=='a' || A[i]=='e' || A[i]=='i' || A[i]=='o' || A[i]=='u')
        {
            vcount++;
        }
        else if((A[i]>=65 && A[i]<=90) || A[i]>=97 && A[i]<=122)
        {
            ccount++;
        }
    }
    printf("Number of vowels present is: %d\n",vcount);
    printf("Number of Consonants present is: %d",ccount);
}
*/

/*
int main()     //Number of words
{
    char A[]={"How are You..?"};
    int words=0;
    for(int i=0;A[i]!=0;i++)
    {
        if(A[i]==' ')
        words++;
    }
    printf("Number of words: %d",words+1);
    
}
*/

/*
int main()     //Number of words in multiple number of spaces
{
    char A[]={"How are   You..?"};
    int words=0;
    for(int i=0;A[i]!=0;i++)
    {
        if(A[i]==' ' && A[i+1]!=' ')
        words++;
    }
    printf("Number of words: %d",words+1);
    
}
*/

/*
int Validate(char *name)    // validating the strings
{
    int i;
    for(i=0;name[i]!=0;i++)
    {
        if((name[i]>=65 && name[i]<=90) && (name[i]>=97 && name[i]<=122) && (name[i]>=48 && name[i]<=57))
        {
            return 1;
        }
        return 0;
    }
}

int main()
{
    char *name="Kavya123@";
    if(Validate(name))
    {
        printf("Valid String");
    }
    else
    printf("Invalid String");
}
*/

/*
int main()        //reversing the string
{
    char A[]="Subramanian";
    char B[11];
    int i=0;
    for(i=0;A[i]!=0;i++)
    {}
    i=i-1;
    int j=0;
    for(int j=0;i>=0;i--,j++)
    {
        B[j]=A[i];
    }
    B[11]='\0';
    printf("%s",B);
}
*/

/*
int main() //reversing the string method:2
{
    char A[]="Subramanian";
    char t;
    int j=0;
    for(j=0;A[j]!=0;j++)
    {}
    j=j-1;
    int i=0;
    for(int i=0;i<j;i++,j--)
    {
        t=A[j];
        A[j]=A[i];
        A[i]=t;
    }
    printf("%s",A);
}
*/

/*
int main()     //comparing strings and finding out which one is smaller and greater
{
    char A[]="Painter";
    char B[]="Painting";
    int i,j;
    for(i=0,j=0;A[i]!='\0' && B[j]!='\0';i++,j++)
    {
        if(A[i]!=B[j])
        break;
    }
    if(A[i]==B[j])
    printf("Equal strings");
    else if(A[i]<B[j])
    printf("1st one is Smaller");
    else
    printf("Second one is smaller");
}
*/

/*
int main()        //Palindrome Checking
{
    char str[20];
    printf("Enter String (upto 20 characters length): ");
    scanf("%s", str);
  
    int strSize = strlen(str);
    if (strSize > 20) {
        printf("\nError: strSize should be less than 20 "
               "characters.");
        return 0;
    }
  
    char strReversed[20];
    for (int i = strSize - 1; i >= 0; --i) {
        strReversed[strSize - 1 - i] = str[i];
    }
  
    if (strcmp(str, strReversed) == 0) {
        printf("\n%s is a palindrome", str);
    }
    else {
        printf("\n%s is not a palindrome", str);
    }
    return 0;
}
*/

int main()
{
    char arr[]="finding";
    int str=strlen(arr);
    int l=0;
    int h=0;

    for(int i=0;arr[i]!=0;i++)
    {
        if(arr[i]<l)
        l=arr[i];
        if(arr[i]>h)
        h=arr[i];
    }

    int H[(h-l)+1]={0};
    for(int i=0;i<=str;i++)
    {
        H[(arr[i])]++;
    }

    
    int n=sizeof(H)/sizeof(H[0]);

    for(int i=0;i<=n;i++)
    {
        if(H[i]>1)
        printf("%s is repeating %d times",i+97,H[i]);
    }
}