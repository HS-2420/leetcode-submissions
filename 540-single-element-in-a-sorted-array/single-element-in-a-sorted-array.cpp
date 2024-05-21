class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
           int s = 0;
        int e = nums.size() - 1;
        
        while (s < e) {
            int m = s + (e - s) / 2;
            
            // Ensure m is even for checking pairs
            if (m % 2 == 1) {
                m--;
            }
            
            // Compare the pair elements
            if (nums[m] == nums[m + 1]) {
                // Single element is in the right half
                s = m + 2;
            } else {
                // Single element is in the left half, including m
                e = m;
            }
        }
        
        return nums[s];
    }
};