#include <stdio.h>
#include<iostream>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
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

/*
int main()
{
    char arr[]="finding";
    int i;
    for(i=0;arr[i]!=0;i++)
    {}
    int l=arr[0];
    int h=arr[0];

    for(int i=0;arr[i]!=0;i++)
    {
        if(arr[i]<l)
        l=arr[i];
        if(arr[i]>h)
        h=arr[i];
    }

    printf("%d\n",h);
    printf("%d\n",l);

    int H[(h-l)]={0};

    for(int i=0;arr[i]!=0;i++)
    {
        H[(arr[i])-97]++;
    }


    for(int i=0;i<=h-l;i++)
    {
        if(H[i]>1)
        printf("%c is repeating %d times",i+97,H[i]);
    }
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
int main ()
{
      char B[] = "riding";
      int H[26];
      printf ("String is \"%s\"\n", B);
      for (int i = 0; i < 26; i++)
      {
            H[i] = 0;
      }
      for (int i = 0; B[i] != '\0'; i++)
      {
           H[B[i] - 97] += 1;
      }
      for (int i = 0; i < 26; i++)
      {
            if (H[i] > 1)
            {
                printf ("\'%c\' is repeating", i + 97);
                printf (": %d times\n", H[i]);
            }
      }
      return 0;
}
*/

/*
int main()    //finding duplicates using bitwise operation
{
    char A[]="finding";
    long int H=0, x=0;

    for(int i=0;A[i]!=0;i++)
    {
        x=1;
        x=x<<A[i]-97;
        if((x & H)>0)
        {
            printf("%c is duplicate\n",A[i]);
        }
        else
        H=H|x;
    }
}
*/

/*
bool Anagram(string str1,string str2)    //checking for anagram
{
    int n1 = str1.length();
    int n2 = str2.length();

    if(n1!=n2)
    return false;

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    for(int i=0; i<n1;i++)
    {
        if(str1[i]!=str2[i])
        return false;
    }
    return true;
}
int main()
{
    string str1="listen";
    string str2="silent";

    if(Anagram(str1,str2))
    cout<<"The given words are anagram";
    else
    cout<<"The given words are not anagram";

    return 0;
}
*/

//hash method is useful for duplicates or single appearing letters also but for bitwise method it's necessary that duplicates won't present there

/*
int main()    //checking for anagram using hash method
{
    char A[]="verbose";
    char B[]="observe";
    int i,H[26]={0};

    for(i=0;A[i]!=0;i++)
    {
        H[A[i]-97]+=1;
    }

    for(i=0;B[i]!=0;i++)
    {
        H[B[i]-97]-=1;
        if(H[A[i]-97]<0)
        {
            printf("Not Anagram");
            break;
        }
    }

    if(B[i]=='\0')
    printf("This is anagram");
}
*/

//if a procedure is backtracking and finding out everything, then that procedure is called as brute force

/*
void permute(string s, string answer)
{
    if (s.length() == 0) {
        cout << answer << "  ";
        return;
    }
    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
        string left_substr = s.substr(0, i);
        string right_substr = s.substr(i + 1);
        string rest = left_substr + right_substr;
        permute(rest, answer + ch);
    }
}
 
// Driver code
int main()
{
    string s = "ABC";
    string answer = "";
 
    cout << "\nAll possible strings are : ";
    permute(s, answer);
    return 0;
}
*/

// C program to print all permutations with duplicates
// allowed
/* Function to swap values at two pointers */
void swap(char* x, char* y)   
{
	char temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

/* Function to print permutations of string
This function takes three parameters:
1. String
2. Starting index of the string
3. Ending index of the string. */
void permute(char* a, int l, int r)
{
	int i;
	if (l == r)
		printf("%s\n", a);
	else {
		for (i = l; i <= r; i++) {
			swap((a + l), (a + i));
			permute(a, l + 1, r);
			swap((a + l), (a + i)); // backtrack
		}
	}
}

/* Driver code */
int main()
{
	char str[] = "ABC";
	int n = strlen(str);
	permute(str, 0, n - 1);
	return 0;
}
