class Solution {
public:
    int trap(vector<int>& height) {
        int l=0;
        int r = height.size()-1;

        int maxLeft = 0;
        int maxRight = 0;

        int res = 0;

        while(l <= r){

            if(height[l] <= height[r]){
                if(height[l] > maxLeft){
                    maxLeft = height[l];
                }
                else{
                    res += maxLeft - height[l];
                }
                l++;
            }
            else{
                if(maxRight < height[r]){
                    maxRight = height[r];
                }
                else{
                    res += maxRight - height[r];
                }
                r--;
            }
        }

        return res;
    }
};
