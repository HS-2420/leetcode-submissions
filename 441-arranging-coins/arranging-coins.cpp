class Solution {
public:
    int arrangeCoins(int n) {
        long s = 0, e = n;
        while (s <= e) 
        {
            long mid = s + (e - s) / 2;
            long sum = mid * (mid + 1) / 2;
            if (sum == n) 
               {  return mid; } 
            else if (sum < n) 
               { s = mid + 1; } 
            else 
               {  e = mid - 1; }
        }
        return e;
    }
};