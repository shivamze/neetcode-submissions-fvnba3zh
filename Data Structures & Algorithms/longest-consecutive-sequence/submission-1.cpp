class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        set<int>st;

        for(int i=0; i<nums.size(); i++){
            st.insert(nums[i]);
        }

        int count = 1;
        auto l = st.begin();
        int prev = *l;
        int maxi = 0;

        for(auto it:st){
            if(it == prev){
                maxi = max(maxi, count);
                continue;
            }
            else if(it == prev+1){
                count++;
                prev++;
            }
            else{
                count = 1;
                prev = it;
            }
            maxi = max(maxi, count);
        }

        return maxi;
    }
};
