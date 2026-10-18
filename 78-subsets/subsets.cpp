class Solution {
public:
    void getAllSubsets(vector<int> &nums, vector<int> &result, int i, vector<vector<int>> &subsets){
        if(i == nums.size()){
            // sttore subsets
            subsets.push_back({result});
            return;
        }

        //include
        result.push_back(nums[i]);
        getAllSubsets(nums, result, i + 1, subsets);

        result.pop_back(); // Backtracking
        getAllSubsets(nums, result, i + 1, subsets);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> result;
        vector<vector<int>> subsets;
        getAllSubsets(nums, result, 0, subsets);
        
        return subsets;
    }
};