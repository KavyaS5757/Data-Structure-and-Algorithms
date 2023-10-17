class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        vector<int> ans;
        int i=0;
        int j=1;
        while(i<=j && j<n)
        {
            if(a[i]>=a[j])
            {
                
               if(j==n-1)
               {
                   ans.push_back(a[i]);
                   i++;
                   j = i + 1;
               }
               else
               {
                   j++;
               }
            }
            else
            {
               i++;
               j = i + 1;
            }
        }
        ans.push_back(a[n-1]);
       return ans; 
    }
};

/*
https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1?page=1&sortBy=submissions
*/
