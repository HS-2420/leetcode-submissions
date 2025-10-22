class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>numberMap;
        for(int i =0;i<nums.size();i++){
            int rem=target-nums[i];
            if(numberMap.count(rem)){
                return {numberMap[rem],i};
            }
            numberMap[nums[i]]=i;
        }
        return{};
    }
};