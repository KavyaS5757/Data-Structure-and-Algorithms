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

int splitString(string s)
{
	int ans=0;
	int n=s.size();

	vector<int> freqpref(26,0), fresuf(26,0);
	vector<int> prefix(n), suffix(n);

	int distinct=0;

	for(int i=0;i<n;i++)
	{
		if(freqpref[s[i]-'a']==0)
		{
			freqpref[s[i]-'a']=1;
			distinct++;
		}
		prefix[i]=distinct;
	}

	distinct=0;

	for(int i=n-1;i>0;i--)
	{
		if(fresuf[s[i]-'a']==0)
		{
			fresuf[s[i]-'a']=1;
			distinct++;
		}
		suffix[i]=distinct;
	}

	for(int i=0;i<n-2;i++)
	{
		if(prefix[i]==suffix[i+1])
		ans++;
	}

	return ans;

}