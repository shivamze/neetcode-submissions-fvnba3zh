class Solution {
public:
    bool isPalindrome(string s) {
        int l =0;
        int r = s.size()-1;

        while(l <= r){
            if(tolower(s[l]) == tolower(s[r])){
                l++;
                r--;
            }
            else if(!isalnum(s[l])){
                l++;
            }
            else if(!isalnum(s[r])){
                r--;
            }
            else{
                cout<<s[l]<<" "<<s[r];
                return false;
            }
        }

        return true;
    }
};
