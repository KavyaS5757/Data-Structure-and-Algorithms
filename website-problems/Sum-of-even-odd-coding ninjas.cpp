#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin>>n;
	int s_odd=0;
	int s_even=0;

	while(n>0)
	{
		int digit = n%10;

		if(digit%2 == 0)
		{
			s_even += digit;
		}
		else
		{
			s_odd += digit;
		}
		n = n/10;
	}
	cout<<s_even<<" "<<s_odd<<endl;
	
}

// https://www.codingninjas.com/studio/problems/sum-of-even-odd_624650?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM
