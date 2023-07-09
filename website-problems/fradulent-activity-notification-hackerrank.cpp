#include <stdio.h>
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

/*
HackerLand National Bank has a simple policy for warning clients about possible fraudulent account activity. If the amount spent by a client on a particular day is greater than or equal to  the client's median spending for a trailing number of days, they send the client a notification about potential fraud. The bank doesn't send the client any notifications until they have at least that trailing number of prior days' transaction data.

Given the number of trailing days  and a client's total daily expenditures for a period of  days, determine the number of times the client will receive a notification over all  days.

Example


On the first three days, they just collect spending data. At day , trailing expenditures are . The median is  and the day's expenditure is . Because , there will be a notice. The next day, trailing expenditures are  and the expenditures are . This is less than  so no notice will be sent. Over the period, there was one notice sent.

Note: The median of a list of numbers can be found by first sorting the numbers ascending. If there is an odd number of values, the middle one is picked. If there is an even number of values, the median is then defined to be the average of the two middle values. (Wikipedia)

Function Description

Complete the function activityNotifications in the editor below.

activityNotifications has the following parameter(s):

int expenditure[n]: daily expenditures
int d: the lookback days for median spending
Returns

int: the number of notices sent
Input Format

The first line contains two space-separated integers  and , the number of days of transaction data, and the number of trailing days' data used to calculate median spending respectively.
The second line contains  space-separated non-negative integers where each integer  denotes .
*/

//using the method of sliding window
#define MAXE 210

int A[200010];
int F[MAXE];

int median(int D)
{
    int p=0;
    for(int i=0;i<MAXE;i++)
    {
        p+=F[i];
        if(p*2 > D)
        {
            return 2*i;
        }
        else if(p*2==D)
        {
            for(int j=i+1; ; j++)
            {
                if(F[j])
                {
                    return i+j;
                }
            }
        }
    }
    return -1;
}

int main()
{
    int N,D;
    cin>>N>>D;
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }
    
    int result=0;
    for(int i=0;i<N;i++)
    {
        if(i>=D)
        {
            if(A[i]>=median(D))
            {
                result++;
            }
            F[A[i-D]]--;
        }
        F[A[i]]++;
    }
    cout<<result<<endl;
    return 0;
    
}
