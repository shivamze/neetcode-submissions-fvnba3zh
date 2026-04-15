class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mini = INT_MAX;
        int maxi = 0;
        int i = 0;
        while( i< n){
            if(prices[i] < mini){
                mini = prices[i];
            }
            else{
                maxi = max(maxi, (prices[i] - mini));
            }
            i++;
        }

        return maxi;
    }
};
