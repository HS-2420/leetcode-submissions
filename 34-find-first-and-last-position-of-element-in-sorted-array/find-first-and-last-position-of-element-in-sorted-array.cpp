  int firstOcr(vector<int>&nums , int target){
            int s=0;
            int e=nums.size()-1;
            int res=-1;
            while(s<=e)
            {
                int m=s+((e-s)/2);
                if(nums[m]==target)
                {
                    res=m;
                    e=m-1;
                }
                else if(nums[m]<target)
                {
                    s=m+1;
                }
                else{
                    e=m-1;
                }
            }
              if(res<0)
            {
                return -1;
            }
            else{
            return res;
            }
        }
        int lastOcr(vector<int>&nums,int target){
             int s=0;
            int e=nums.size()-1;
            int res=-1;
            while(s<=e)
            {
                int m=s+((e-s)/2);
                if(nums[m]==target)
                {
                    res=m;
                    s=m+1;
                }
                else if(nums[m]<target)
                {
                    s=m+1;
                }
                else{
                    e=m-1;
                }
            }
            if(res<0)
            {
                return -1;
            }
            else{
            return res;
            }
        }
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>res;
        int firOc=firstOcr(nums,target);
        int lstOc=lastOcr(nums,target);
        res.push_back(firOc);
        res.push_back(lstOc);
        return res;
    }
};