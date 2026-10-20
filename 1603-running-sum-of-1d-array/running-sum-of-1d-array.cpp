class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        for(int i = 0 ; i < nums.size() ; i++){
            int sum = 0;
            int j = i;
            while(j >= 0){
                sum += nums[j];
                j--;
            }
            ans.push_back(sum);
        }
        return ans;
    }
};