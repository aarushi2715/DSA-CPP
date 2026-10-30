class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        

        unordered_set<int> st;
        int ans = 0;

        for(int i=0; i<nums.size(); i++){
            st.insert(nums[i]);
        }

        for(int x : st){
            if( x == INT_MIN || st.find(x-1) == st.end()){
                int cnt =1;
                long long  el = (long long)x+1;

                while(el != INT_MAX && st.find(el) != st.end() ){
                    cnt++;
                    el++;
                }
                 ans = max(ans, cnt);
            }
           
        }

        return ans;
    }
};