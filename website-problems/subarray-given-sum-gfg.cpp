vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        int l=0;
        int sum=0;
        
        for(int i=0;i<n;i++)
        {
            sum += arr[i];
            if(sum==s)
            return {l+1, i+1};
            else if(sum>s)
            {
                while(sum>s)
                {
                    sum-=arr[l];
                    l++;
                }
                if(sum==s && l<=i)
                return {l+1,i+1};
            }
        }
        return {-1};
    }

/*
https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1?page=1&sortBy=submissions
*/
