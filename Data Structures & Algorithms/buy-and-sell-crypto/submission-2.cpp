class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mini = INT_MAX;
        int maxi = 0;

        for(auto i:prices){

            maxi = max(maxi, (i - mini));
            mini = min(mini, i);
        }

        return maxi;
    }
};
