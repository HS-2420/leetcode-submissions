class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        //      int n = nums.size();
        // vector<int> ans(2 * n);
        // for (int i = 0; i < n; ++i) {
        //     ans[i] = nums[i];
        // }
        // for (int i = n; i < 2 * n; ++i) {
        //     ans[i] = nums[i - n];
        // }   
        // return ans;

        // vector<int>ans;
        // for(int i=0;i<2;i++)
        // {
        //     for(int j=0;j<nums.size();j++)
        //     {
        //         ans.push_back(nums[j]);
        //     }
        // }


        vector<int> ans(2*nums.size());
        for(int i=0;i<nums.size();i++){
            ans[i]=nums[i];
            ans[nums.size()+i]=nums[i];
        } 

        return ans;
    }
};