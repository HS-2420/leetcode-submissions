class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // return s==t;
        if(s.length() != t.length())
        { return false; }
        int hash[26]={0};
        for(auto H : s)
        { hash[H - 'a']++; }
        for(auto H : t)
        { hash[H - 'a']--; }
        for(auto val:hash)
        {
            if(val != 0)
            { return false; }
        }
        return true;
    }
};