class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for (auto it1 = nums.begin(); it1 != nums.end(); ++it1) {
            auto it2 = find(it1 + 1, nums.end(), target - *it1);
            if (it2 != nums.end()) {
                result.push_back(distance(nums.begin(), it1));
                result.push_back(distance(nums.begin(), it2));
                break;
            }
        }
        return result;
    }
};

// https://leetcode.com/problems/two-sum/submissions/1176621796/
// https://leetcode.com/problems/two-sum/solutions/4735073/add-two-sum/
