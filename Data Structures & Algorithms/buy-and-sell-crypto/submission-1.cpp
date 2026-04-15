class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mini = INT_MAX;
        int maxi = 0;
        int i = 0;
        while( i< n){

            maxi = max(maxi, (prices[i] - mini));
            mini = min(mini, prices[i]);
            i++;
        }

        return maxi;
    }
};
