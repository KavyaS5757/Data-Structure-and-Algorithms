/* Brute Force Algorithm - time complexity is more here, but the common approach for every problems */
class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        sort(arr, arr+r+1);
        
        return arr[k-1];
    }
};

/*
https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1?page=1&sortBy=submissions
*/
