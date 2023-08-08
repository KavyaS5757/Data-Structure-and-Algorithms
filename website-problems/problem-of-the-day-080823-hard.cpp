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

You are gievn a string 'A' of length 'S' consisting  of lowercase English alphabets. find the number of splits. Splitting a string 'S' into 2 non-empty
strings 'X' and 'Y' is called good if the number of good characters in strings 'X' and 'Y' are equal

For Example :
If string S is equal to “abadaa”. Then S can be split in the following ways: X = “a” and Y = “badaa”, string X has 1 unique character and Y has 3 
unique characters. X = “ab” and Y = “adaa”, string X has 2 unique characters and Y has 2 unique characters.

*/

int findMinCost(vector<int> &arr, int n) 
{
	int dp[n][n];
	for (int i = 0; i < n; i++) 
	{
		dp[i][i] = 0;   
	}
	int prefSum[n];
	prefSum[0] = arr[0];
	for (int i = 1; i < n; i++) 
	{
		prefSum[i] = prefSum[i - 1] + arr[i];
	}
	for (int len = 1; len < n; len++) 
	{
		for (int i = 0; i + len < n; i++) 
		{
			int x = i, y = i + len;
			int sum = 0;
			if (x == 0) 
			{
				sum = prefSum[y];
			}
			else 
			{
				sum = prefSum[y] - prefSum[x - 1];
			}
			dp[x][y] = 1e9;
			for (int j = x; j < y; j++) 
			{
				dp[x][y] = min(dp[x][y], dp[x][j] + dp[j + 1][y] + sum);
			}
		}
	}
	return dp[0][n - 1];
}