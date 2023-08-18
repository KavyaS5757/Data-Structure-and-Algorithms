
#include<iostream>
#include<stdlib.h>
#include <string.h>
#include <vector>
#include <stdlib.h>
#include<map>
#include <set>
#include <unordered_map>
#include<algorithm>
#include <iomanip>
using namespace std;

int str_length(char string[])
{
    int count;

    for(count=1;string[count]!='\0';count++)
    {
        count+=1;
    }
    return count;
}

//program to check alphabet or not
int main() {
    char character,string[100];
    printf("Enter a character: ");
    scanf("%c", &character);
    printf("Enter some sentence: ");
    scanf("%s",string);

    if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'))
    printf("%c is an alphabet", character);
    else
    printf("%c is not an alphabet", character);

    //printing the ascii values of the corresponding characters
    printf("\nThe ascii values of %c is %d",character,character);

    int count=str_length(string);
    printf("\nThe count of the string %s is %d",string,count);

    return 0;
}
