class Solution{
    public:

    long long maxSubarraySum(int arr[], int n)
    {
      long long curr_sum = 0;
      long long max_sum = 0;
      for(int i=0;i<n;i++)
        {
          curr_sum += arr[i];
          max_sum = max(curr_sum, max_sum);
          if(curr_sum<0)
          {
            curr_sum=0;
          }
        }
      return max_sum;
    }
}

/*
 https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1?page=1&sortBy=submissions
*/
