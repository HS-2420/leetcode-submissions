int findRotation(vector<int>& nums) {
    int s = 0;
    int n = nums.size();
    int e = n - 1;
    while (s <= e) {
        if (nums[s] <= nums[e]) {
            return s;
        }
        int m = s + ((e - s) / 2);
        int next = (m + 1) % n;
        int prev = (m + n - 1) % n;
        if (nums[m] <= nums[prev] && nums[m] <= nums[next]) {
            return m;
        } else if (nums[s] <= nums[m]) {
            s = m + 1;
        } else if (nums[m] <= nums[e]) {
            e = m - 1;
        }
    }
    return -1;
}
int findEle(vector<int>& nums, int s, int e, int target) {
    while (s <= e) {
        int m = s + ((e - s) / 2);
        if (nums[m] == target) {
            return m;
        } else if (nums[m] < target) {
            s = m + 1;
        } else {
            e = m - 1;
        }
    }
    return -1;
}
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size() - 1;
        int ans = findRotation(nums);
        if (target >= nums[ans] && target <= nums[e]) {
            s = ans;
            int res1 = findEle(nums, s, e, target);
            return res1;
        } else {
            e = ans - 1;
            int res2 = findEle(nums, s, e, target);
            return res2;
        }
        return -1;
    }
};