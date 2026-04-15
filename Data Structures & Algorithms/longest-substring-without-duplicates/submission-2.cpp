class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int>mp;
        int l = 0;
        int maxLen = 0;
        
        for(int r=0; r<s.size(); r++){

            if(mp.find(s[r]) != mp.end()){
                l = max(mp[s[r]]+1, l);
            }

            mp[s[r]] = r;
            maxLen = max(maxLen, r-l+1);
        }

        return maxLen;
    }
};
