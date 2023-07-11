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

using namespace std;
/*
Sum of array elements excluding the elements which lie between a and b
*/

#include <bits/stdc++.h>

using namespace std;

void sumexcludingrange(vector<int> li,int a,int b)
{
    int sum=0;
    bool add=true;
    int n=li.size();
    for(int i=0;i<n;i++)
    {
        if(li[i]!=a && add==true)
        sum+=li[i];

        //marking when a and b are found
        else if(li[i]==a)
        add=false;
        else if(li[i]==b)
        add=true;
        /*
        If li[i] is not equal to a and add is true, it means the current element should be added to the sum.
        If li[i] is equal to a, it means we have encountered the starting range, and we need to stop adding elements to the sum. Hence, add is set to false.
        If li[i] is equal to b, it means we have encountered the ending range, and we can resume adding elements to the sum. Hence, add is set back to true.
        So, when b is encountered, add is set to true to include elements again after excluding the range [a, b].
        */
    }
    cout<<sum;
}

int main()
{
    vector <int> lis{1,2,4,5,6};
    int a=2;
    int b=5;

    sumexcludingrange(lis,a,b);
}

/*
    References:-
    https://www.geeksforgeeks.org/sum-of-array-elements-excluding-the-elements-which-lie-between-a-and-b/
*/