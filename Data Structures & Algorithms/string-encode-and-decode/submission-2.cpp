class Solution {
public:

    string encode(vector<string>& strs) {
        string encode = "";

        for(auto s: strs){
            encode += to_string(s.size()) + "#" + s;
        }

        return encode;
    }

    vector<string> decode(string s) {

        vector<string> strs;

        int i =0;

        while(i < s.size()){
            int len = 0;

            while(s[i] != '#'){
                int val = s[i] - '0';
                len = len*10 + val;
                i++;
            }
            i++;
            
            string str = s.substr(i, len);
            i += len; 
            // while(len && i < s.size()){
            //     str += s[i];
            //     len--;
            //     i++;
            // }
            strs.push_back(str);
        }

        return strs;

    }
};
