#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n) {
    if (n == 1 || n == 2)
        return 1;
    else if (n > 2)
        return fibonacci(n - 1) + fibonacci(n - 2);
    else
        return -1; // handle invalid input
}

int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
        int n;
        cin >> n;

        if (n <= 0) 
        {
            cout << -1 << endl;
        } 
        else 
        {
            int f1 = 1, f2 = 1;
            if (n == 1 || n == 2)
                cout << 1 << endl;
            else
                cout << fibonacci(n) << endl;
        }

    return 0;
}

// https://www.codingninjas.com/studio/problems/nth-fibonacci-number_74156?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM
