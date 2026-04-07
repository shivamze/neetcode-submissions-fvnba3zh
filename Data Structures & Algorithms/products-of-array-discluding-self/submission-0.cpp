class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = 1;
        int zeros = 0;

        for(int i =0; i<nums.size(); i++){
            if(nums[i] == 0){
                zeros++;
                continue;
            }

            n *= nums[i];
        }

        vector<int>product;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0 && zeros == 1){
                product.push_back(n);
            }
            else if(zeros > 0){
                product.push_back(0);
            }
            else{
                int m = n/nums[i];
                product.push_back(m);
            }
        }

        return product;
    }
};
