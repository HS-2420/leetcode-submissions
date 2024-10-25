class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    //   set<int>s;
    // for (auto num : nums) {
    //     if (s.find(num) != s.end()) 
    //     { return true; }
    //     s.insert(num); }
    // return false;

    //  unordered_set<int>s;
    //     for (int num : nums) {
    //         if (s.count(num) > 0)
    //             return true;
    //         s.insert(num);
    //     }
    //     return false;

    set<int>s;
    for(auto num:nums)
    {
        s.insert(num);
    }
    if(s.size()==nums.size())
    { return false; }
    else
    {return true;}
    }
};