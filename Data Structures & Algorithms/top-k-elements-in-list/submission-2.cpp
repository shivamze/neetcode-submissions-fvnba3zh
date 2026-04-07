class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>mp;

        for(auto num:nums){
            mp[num]++;
        }

        vector<vector<int>>bucket(nums.size()+1);

        for(auto it:mp){
            bucket[it.second].push_back(it.first);
        }

        vector<int>ans;

        for(int i=bucket.size()-1;  i >= 0 && k>0; i--){
            for(auto i:bucket[i]){
                ans.push_back(i);
                k--;

                if(k == 0) break;
            }
        }

        return ans;
    }
};
