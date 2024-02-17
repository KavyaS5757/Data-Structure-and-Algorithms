#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string addBinaryString(string &a, string &b, int n, int m)
{
    // Write your code here.
    int N = a.length();
    int M = b.length();
    int carry = 0;
    string sum = "";

    int i=0,j=0;

    while(i<N || j<M || carry)
    {
        int cur_sum = carry;
        if(i<N)
        {
            cur_sum += a[N-1-i] - '0';
            i++;
        }
        if(j<M)
        {
            cur_sum += b[M-1-j] - '0';
            j++;
        }
        sum += (cur_sum % 2) + '0';
        carry = cur_sum/2;
    }

    reverse(sum.begin(),sum.end());
    return sum;
}

// https://www.codingninjas.com/studio/problem-of-the-day/easy
