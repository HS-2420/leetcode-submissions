class Solution {
public:
int findSqrt(int num)
{
    int s=1;int e=num;
    while(s<=e)
    {
        long long m=s+((e-s)/2);
        long long val=m*m;
        if(val>num)
        {e=m-1;}
        else
        {s=m+1;}
    }
    return e;
}
    bool isPerfectSquare(int num) {
        int ans=findSqrt(num);
        if(ans*ans==num)
        {
            return true;
        }
        else {
            return false;
        }
    }
};