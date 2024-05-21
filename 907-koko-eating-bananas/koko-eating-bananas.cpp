class Solution {
public:
bool canEatAll(vector<int>& piles, int m, int h)
{
    int actHrs=0;
    for(int &x : piles)
    {
        actHrs += x/m;
        if(x%m != 0)
        {actHrs++;}
    }
    return actHrs <= h;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int s=1;int e= *max_element(begin(piles),end(piles));
        while(s<e)
        {
            int m= s+((e-s)/2);
            if(canEatAll(piles,m,h))
            {e=m;}
            else
            {s=m+1;}
        }
        return e;
    }
};