    bool check(vector<int> &wts,int w,int days)
    {
        int day=1;
        int wt=0;
        for(int i=0;i<wts.size();i++)
        {
            if(wt+wts[i]>w)
            {
                wt=wts[i];
                if(wt>w)
                { return 0; }
                day++;
            }
            else
            { wt+=wts[i]; }
        }
        return day<=days;
    }
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {  
        int s=1;
        int e=accumulate(weights.begin(),weights.end(),0);
        int ans=-1;
        while(s<=e){
            int mid=s+((e-s)/2);
            if(check(weights,mid,days))
            {
                ans=mid;
                e=mid-1;
            }
            else
            { s=mid+1; }
        }
        return ans;
    }
};