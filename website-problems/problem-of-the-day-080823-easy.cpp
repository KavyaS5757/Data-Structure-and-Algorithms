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

You are gievn an array 'A' of length 'N' consisting only of integers and an integer 'K'. You have to update every element of the array
by increasing or decreasing its value by K only once. Ypur task is to minimize the difference between the maximum and minimum elements
of the array after performing the increment or decrement of everey element of the array

For example:
Let's say the array 'A' = [1, 2, 3, 4, 5] and 'K' = 2, then after increasing each element by 'K'. The array 'A' will become [3, 4, 5, 6, 7]. So the maximum - minimum will be 7 - 3 = 4.
*/

int minimizeIt(vector<int> A, int K)
{
	// Write your code here.
	int size=A.size();

	if(size==1)
	{
		return 0;
	}
	

	sort(A.begin(),A.end());

	int mini=0;
	int maxi=0;
	int result=A[size-1]-A[0];

	for(int i=1;i<size;i++)
	{
		if(A[i]-K<0)
		{
			continue;
		}
		maxi=max(A[i-1]+K,A[size-1]-K);
		mini=min(A[0]+K,A[i]-K);
	    
		result=min(result,maxi-mini);
		
	}
	return result;


}

