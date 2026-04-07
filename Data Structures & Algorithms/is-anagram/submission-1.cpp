class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int>mp;

        int n = s.size();
        int m = t.size();

        for(int i=0; i<n; i++){
            mp[s[i]]++;
        }

        for(int i=0; i<m; i++){
            if(mp[t[i]]){
                mp[t[i]]--;
            }
            else{
                return false;
            }
        }

        for(auto i:mp){
            if(i.second != 0){
                return false;
            }
        }

        return true;
    }
};
