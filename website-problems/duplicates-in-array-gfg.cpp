vector<int> duplicates(long long arr[], int n) {
        // code here
       sort(arr,arr + n);
       vector<int> ans;
       int k = INT_MIN;
       for(int i=0;i<n;i++)
       {
           if(k!=arr[i])
           {
             if(arr[i]==arr[i+1])
             {
                ans.push_back(arr[i]);
                k = arr[i];
             }
           }
           }
           if(ans.size()==0)
           {
               ans.push_back(-1);
           }
           return ans;
           
    }

/*
https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1?page=1&sortBy=submissions
*/
