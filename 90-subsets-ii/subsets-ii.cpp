class Solution {
public:
    void findSubsets(vector<int> &nums, vector<int> &ans, vector<vector<int>> &allSubsets, int i){
        if(i == nums.size()){
            allSubsets.push_back({ans});
            return;
        }

        ans.push_back(nums[i]);
        findSubsets(nums, ans, allSubsets, i + 1);

        ans.pop_back();

        int idx = i + 1;
        while(idx < nums.size() && nums[idx] == nums[i])
            idx++;
        findSubsets(nums, ans, allSubsets, idx);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> allSubsets;
        vector<int> ans;
        findSubsets(nums, ans, allSubsets, 0);
        return allSubsets;
    }
};