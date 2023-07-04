
/*
class Solution {           //  --c++ code
public:
    void moveZeroes(vector<int>& nums) {
        
        int n=nums.size();

        //counting the zeroes
        int Countzeroes=0;
        for(int i=0;i<n;i++)
        {
            Countzeroes += nums[i] == 0;
        }

        //garbbing the non-zero elements in the beginning portion
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            ans.push_back(nums[i]);
        }

        while(Countzeroes--)
        ans.push_back(0);

        for(int i=0;i<n;i++)
        {
            nums[i]=ans[i];
        }
    }
};
*/

class Solution {         // --c++ code
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = 0;
        while(j<n){
            if(nums[j]==0) j++;
            else{
                swap(nums[i], nums[j]);
                i++;
                j++;
            }
        }
    }
};
