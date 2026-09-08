class Solution {
public:
    void helper(int idx, vector<int>& nums, vector<int>& cur, vector<vector<int>>& ans) {
       //if we using for loop we do not need to use base case because the for loop condition naturally acts as the termination condition.
        ans.push_back(cur);

        for (int i = idx; i < nums.size(); i++) {
            // Skip duplicates at the same recursion depth
            if (i > idx && nums[i] == nums[i - 1]) continue;

            cur.push_back(nums[i]);
            helper(i + 1, nums, cur, ans);
            cur.pop_back(); // Backtrack
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> cur;
        vector<vector<int>> ans;

        // Sort to group duplicate elements together
        sort(nums.begin(), nums.end());

        helper(0, nums, cur, ans);

        return ans;
    }
};
