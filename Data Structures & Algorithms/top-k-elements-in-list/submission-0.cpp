class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int, int>>pq;
        unordered_map<int, int>mp;

        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }

        for(auto i:mp){
            pq.push({i.second, i.first});
        }

        vector<int>ans;
        while(k > 0){
            int n = pq.top().second;
            ans.push_back(n);
            pq.pop();
            k--;
        }

        return ans;
    }
};
