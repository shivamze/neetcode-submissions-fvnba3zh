class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int>mp;
        vector<int>ans(2, -1);

        for(int i=0; i< nums.size(); i++){
            int val = target - nums[i];
            if(mp[val]){
                ans[0] = mp[val]-1;
                ans[1] = i;

                return ans;
            }

            mp[nums[i]] = i+1;
        }

        return ans;
    }
};
