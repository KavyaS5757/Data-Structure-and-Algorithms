class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here
        int count = 1;
        int element = a[0];
        
        for(int i=0;i<size;i++)
        {
            if(a[i]==element)
            {
                count ++;
            }
            else
            {
                count--;
                if(count==0)
                {
                    count = 1;
                    element=a[i];
                }
            }
        }
        
        count = 0;
        
        for(int i=0;i<size;i++)
        {
            if(a[i]==element)
            count++;
        }
        
        if(count>size/2)
        {
            return element;
        }
        else
        {
            return -1;
        }
    }
};

/*
https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1?page=1&sortBy=submissions
https://leetcode.com/problems/majority-element/submissions/
*/
