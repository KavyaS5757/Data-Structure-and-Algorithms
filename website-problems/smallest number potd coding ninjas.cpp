#include <bits/stdc++.h> 
string smallestNumber(int n, int k)
{
	// Write your code here
	if(k==0)
	{
		return (n==1)?"0":"-1";
	}

	if(k>9*n)
	{
		return "-1";
	}
	string ans ="";

	k--;
	for(int i=n-1;i>=1;i--)
	{
		if(k>9)
		{
			ans+='9';
			k-=9;
		}
		else
		{
			ans+=to_string(k);
			k=0;
		}
	}
	ans+=to_string(k+1);
	reverse(ans.begin(),ans.end());
	return ans;
}

//https://www.codingninjas.com/studio/problem-of-the-day/easy
