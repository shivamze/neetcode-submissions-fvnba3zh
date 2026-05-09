class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

        int n = temperatures.size();
        stack<pair<int, int>>st;
        vector<int>v(n, 0);

        for(int i=0; i<n; i++){
            while(!st.empty()){
                if(temperatures[i] > st.top().second){
                    v[st.top().first] = i - st.top().first;
                    st.pop();
                }else{
                    break;
                }
            }

            st.push({i, temperatures[i]});
        }


        return v;
    }
};
