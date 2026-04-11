class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0;
        int r =  heights.size()-1;

        int count = 0;

        while(l <= r){

            if(heights[l] <= heights[r]){
                count = max(count, heights[l]*(r-l));
                l++;
            }
            else{              
                count = max(count, heights[r]*(r-l));
                r--;
            }
        }

        return count;
    }
};
