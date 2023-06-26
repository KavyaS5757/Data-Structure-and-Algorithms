#include <stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

#include<iostream>
using namespace std;


//Pattern questions

/*
int main()     //program to print a half pyramid
{
int n=5;
int arr[n]={0};

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<i;
        }
        cout<<"\n"<<endl;
    }
}
*/

/*
int main()
{
	int n;
	cout<<"Enter the number of rows"<<endl;
	cin>>n;

	for(int i=n;i>0;i--)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<j;         //printing numbers in a consecutive manner  
		}
		cout<<endl;
	}
	return 0;
}
*/


int main() {

    int space, rows;

    cout <<"Enter number of rows: ";
    cin >> rows;

    for(int i = 1, k = 0; i <= rows; ++i, k = 0) {
        for(space = 1; space <= rows-i; ++space) {
            cout <<"  ";
        }

        while(k != 2*i-1) {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }    
    return 0;
}


/*
   References:-
   https://www.programiz.com/cpp-programming/examples/pyramid-pattern
*/