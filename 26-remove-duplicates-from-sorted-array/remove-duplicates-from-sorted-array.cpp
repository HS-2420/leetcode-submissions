class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int j=1;
        int e=nums.size();
        int count=1;
        while(j<e)
        {
            if(nums[i]==nums[j])
            {
                j++;
            }
            else if(nums[i]!=nums[j])
            {
                count++;
                i++;
                swap(nums[i],nums[j]);
                j++;
            }
        }
        return count;

    }
};