class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> new_arr(2*nums.size());
        for(int i=0;i<nums.size();i++){
        int num= nums[i];
        new_arr[i]=num;
        new_arr[i+nums.size()]=num;
        }
        return new_arr;
    }
};