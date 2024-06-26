class Solution {
public:
    int mySqrt(int x) {
        int s=1;
        int e=x;
        while(s<=e)
        {
            int m=s+((e-s)/2);
            long long ans = static_cast<long long>(m) * m;
            if(ans>x)
            {e=m-1;}
            else
            {s=m+1;}
        }
        return e;
    }
};