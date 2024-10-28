class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // for(int i=0;i<nums.size();i++)
        // {
        //     for(int j=i+1;j<nums.size();j++)
        //     {
        //         if(nums[i]+nums[j]==target)
        //         {  return {i , j}; }
        //     }
        // }
        // return {};

        map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {
            int num=nums[i];
            int req=target-num;
            if(mpp.find(req) != mpp.end())
            {
                return {mpp[req],i};
            }
            mpp[num]=i;
        }
        return {};
    }
};