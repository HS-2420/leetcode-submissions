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
    int findSum(vector<int>& weights)
    {
        int sum=0;
        for(int i=0;i<weights.size();i++)
        {
            sum=sum+weights[i];
        }
        return sum;
    }
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {  
        int s=1;
        int e=findSum(weights);
        while(s<e){
            int mid=s+((e-s)/2);
            if(check(weights,mid,days))
            { e=mid; }
            else
            { s=mid+1; }
        }
        return s;
    }
};