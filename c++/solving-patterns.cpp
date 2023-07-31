#include <stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;



//Pattern questions

//1.
// int main()
// {
//     int n;
//     cin>>n;

//     int i=1;
//     while(i<=n)
//     {
//         int j=1;
//         while(j<=n)
//         {
//             cout<<j;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

/*
   Answer:-
   4
   1234
   1234
   1234
   1234
*/

//2.

// int main()
// {
//     int n;
//     cin>>n;

//     int i=1;
//     while(i<=n)
//     {
//         int j=1;
//         while(j<=n)
//         {
//             cout<<n-j+1;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

/*
   Answer
   5
   54321
   54321
   54321
   54321
   54321

*/

//3.

// int main()
// {
//     int n;
//     cin>>n;

//     int i=1;
//     int count=1;

//     while(i<=n)
//     {
//         int j=1;
//         while(j<=n)
//         {
//             cout<<count<<" ";
//             count++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

/*
   Answers
   5
   1 2 3 4 5
   6 7 8 9 10
   11 12 13 14 15
   16 17 18 19 20
   21 22 23 24 25
*/

//4.(star problems)

// int main()
// {
//     int n;
//     cin>>n;

//     int i=1;
    
//     while(i<=n)
//     {
//         int j=1;
//         while(j<=i)
//         {
//             cout<<"* ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

/*

Answer
4
*
* *
* * *
* * * *

*/

// int main()
// {
//     int n;
//     cin>>n;

//     int i=1;
//     while(i<=n)
//     {
//         int j=1;
//         while(j<=i)
//         {
//             cout<<i;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

/*

Answer
5
1
22
333
4444
55555

*/

//5.
// int main()
// {
//     int n;
//     cin>>n;

//     int i=1;
//     while(i<=n)
//     {
//         int j=1;
//         while(j<=i)
//         {
//             cout<<i-j+1<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

/*

Answers
5
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1

*/

//6.
// int main()
// {
//     int n;
//     cin>>n;

//     int i=1;
//     char character='A';

//     while(i<=n)
//     {
//         int j=1;
//         while(j<=i)
//         {
//             cout<<character<<" ";
//             j++;
//         }
//         cout<<endl;
//         character++;
//         i++;
//     }
// }
/*
Answers
4
A
B B
C C C
D D D D
*/

//7.
// int main()
// {
//     int n;
//     cin>>n;

//     int i=1;
//     char character='A';

//     while(i<=n)
//     {
//         int j=1;
//         while(j<=i)
//         {
//             cout<<character<<" ";
//             character++;
//             j++;
//         }
//         cout<<endl;

//         i++;
//     }
// }
/*
Answers
5
A
B C
D E F
G H I J
K L M N O
*/

//8.
// int main()
// {
//     int n;
//     cin>>n;

//     int i=1;
//     char character='A';

//     while(i<=n)
//     {
//         int j=1;
//         while(j<=n)
//         {
//             cout<<character<<" ";
//             character++;
//             j++;
//         }
//         cout<<endl;

//         i++;
//     }
// }
/*
Answers
4
A B C D
E F G H
I J K L
M N O P
*/

//9.
// int main()
// {
//     int n;
//     cin>>n;

//     int i=1;
//     char character='A';

//     while(i<=n)
//     {
//         int j=1;
//         while(j<=n)
//         {
//             cout<<character<<" ";
//             j++;
//         }
//         cout<<endl;
//         character++;
//         i++;
//     }
// }
/*
Answers
5
A A A A A
B B B B B
C C C C C
D D D D D
E E E E E
*/

//10.
// int main()
// {
//     int n;
//     cin>>n;

//     int i=1;

//     while(i<=n)
//     {
//         int j=1;
//         while(j<=n)
//         {
//             char ch='A'+i+j-2;
//             cout<<ch<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }
/*
Answers
5
A B C D E
B C D E F
C D E F G
D E F G H
E F G H I
*/

//11.
// int main()
// {
//     int n;
//     cin>>n;

//     int i=1;

//     while(i<=n)
//     {
//         int j=1;
//         while(j<=i)
//         {
//             char ch='A'+i+j-2;
//             cout<<ch<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }
/*
Answers
4
A
B C
C D E
D E F G
*/

//12.
// int main()
// {
//     int n;
//     cin>>n;

//     int i=1;

//     while(i<=n)
//     {
//         int j=1;
//         while(j<=i)
//         {
//             char ch='A'+n-i;
//             cout<<ch<<" ";
//             ch++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

/*
Answers
5
E
D D
C C C
B B B B
A A A A A
*/

// int main()
// {
//     int n;
//     cin>>n;

//     int i=1;

//     while(i<=n)
//     {
//         int j=1;
//         char ch='A'+n-i;
//         while(j<=i)
//         {
//             cout<<ch<<" ";
//             ch++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

/*
Answers
5
E
D E
C D E
B C D E
A B C D E
*/

int main()
{
    int n;
    cin>>n;

    int i=1;

    while(i<=n)
    {
        int j=1;
        char space = n-i;
        while(j<=n)
        {
            cout<<"* ";
            space--;
            j++;
        }
        cout<<endl;
        i++;
    }
}