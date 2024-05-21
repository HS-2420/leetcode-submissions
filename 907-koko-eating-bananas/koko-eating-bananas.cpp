class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (canFinish(piles, h, mid)) {
                right = mid; // try for a smaller speed
            } else {
                left = mid + 1; // increase the speed
            }
        }
        
        return left;
    }

private:
    bool canFinish(const vector<int>& piles, int h, int k) {
        int hoursNeeded = 0;
        for (int pile : piles) {
            hoursNeeded += (pile + k - 1) / k; // ceil(pile / k)
        }
        return hoursNeeded <= h;
    }
};
