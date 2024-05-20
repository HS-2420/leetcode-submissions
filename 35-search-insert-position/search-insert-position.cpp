class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s=0;
        int n=nums.size();
        int e=n-1;
        // while(s<=e)
        // {
        //     int m= s + ((e-s)/2);
        //     if(nums[m]==target)
        //     { return m; }
        //     else if(target>nums[m])
        //     { s=m+1; }
        //     else
        //     { e=m-1; }
        // }
        // return s;
        if(target>nums[e])
            {return n;}
        while(s<e)
        {
            int m=s+((e-s)/2);
            if(nums[m]>=target)
            {e=m;}
            else{
                s=m+1;
            }
        }
        return s;
    }
};