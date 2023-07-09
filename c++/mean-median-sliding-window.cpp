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
double mean(int arr[],int size)
{
	int sum=0;
	for(int i=0;i<size;i++)
	{
		sum+=arr[i];
	}
	return (double)sum/(double)size;
}

double median(int arr[],int size)
{
	sort(arr, arr+size);
	if(size%2 !=0)
	return (double)arr[size/2];
	return (double)(arr[(size-1)/2] + arr[(size)/2])/2.0;
}

int main()
{
	int arr[] = {1,2,3,4,5,6,7,3,2,45,67,9};
	int size=sizeof(arr)/sizeof(arr[0]);
	cout<<"The mean is: "<<mean(arr,size)<<endl;
	cout<<"The median is: "<<median(arr,size)<<endl;
	return 0;
}
*/

//using the method of sliding window
double mean(int arr[], int size)
{
	int sum=0;
	for(int i=0;i<size;i++)
	{
		sum+=arr[i];
	}

	return (double)sum/(double)size;
}

void findMedian(int arr[],int size, int k)
{
	for(int i=0;i<size-k;i++) 
	{
		int temp[k];  //creating a temporary array to store elements of the current window

		for(int j=0;j<k;j++)
		{
			temp[j]=arr[i+j];
		}
		sort(temp,temp+k);  //sorting the temporary array

		if(k & 1)  //if k is odd we can take k/2th element
		cout<<temp[k/2]<<" ";
		else    //if k is even taking average of k/2 and (k+1)/2 -1 th element
		cout<<fixed<<setprecision(2)<<((float)temp[k/2] + (float)temp[(k+1)/2 - 1])/2 <<" ";

	}
}

int main()
{
	int arr[] = {1,2,3,4,5,6,7,3,2,45,67,9};
	int size=sizeof(arr)/sizeof(arr[0]);
	int k;
	cout<<"Enter the size of the window "<<endl;
	cin>>k;
	cout<<"The mean is: "<<mean(arr,size)<<endl;
	
	findMedian(arr,size,k);
	return 0;
}