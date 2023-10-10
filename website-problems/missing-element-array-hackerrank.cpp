class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        // Your code goes here
        sort(array.begin(),array.end());
        int k=1;
        for(int i=0;i<n;i++)
        {
            if(array[i]==k)
            k++;
            else
            return k;
            
        }
    }
};

/*
https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1?page=1&sortBy=submissions
*/
