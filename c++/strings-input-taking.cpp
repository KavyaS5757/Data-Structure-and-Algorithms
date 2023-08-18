
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

//strings taking inputs from users and printing it
int main()
{
    char character;
    char string[100];
    char sentence[100];

    scanf("%c",&character);
    scanf("%s",string);
    fflush(stdin);
    /*
    Buffering works in such a way that the contents of an output buffer are only written to the stdout stream or 
    FILE object once the buffer is full, or there is a new line character at the end of it. This may result in 
    unexpected behavior. For instance, in the code below, the user may not see the string passed in the printf 
    function on their terminal as it is not large enough to fill the buffer completely, nor is there a new line 
    character at the end of it.

    Here, the programmer can use the fflush function to make sure that the current state of the buffer is 
    immediately printed to the console and written to the stdout stream.

    #include <stdio.h>

    int main()
    {
        printf("Welcome to Educative!");
        fflush(stdout);
    
    }
    */

    fgets(sentence,500,stdin);
    /*
    The fgets() function in C reads up to n characters from the stream (file stream or standard input stream) to a string str. 
    The fgets() function keeps on reading characters until:

    (n-1) characters have been read from the stream.
    a newline character is encountered.
    end of file (EOF) is reached.
    fgets terminates at the newline character but appends it at the end of the string str. 
    The function also appends the terminating null character at the end of the passed string.
    Syntax
    char* fgets(char* str, int n, FILE* stream);
    Arguments
    char* str: pointer to an initialized string in which characters are copied.
    int n: number of characters to copy.
    FILE* stream: pointer to the file stream, this can be replaced by stdin when reading from standard input.
    */
   
    printf("Your character is %c \n",character);
    printf("Your string is %s \n",string);
    printf("Your sentence is %s \n",sentence);
}

