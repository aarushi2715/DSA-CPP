class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size()/2;
        unordered_map<int, int> mpp;
        for(int  num : nums){
            mpp[num]++;
        }
        int ans =0;
        for( auto x : mpp){
            if(x.second> n){
                ans = x.first;
            }
        }
        return ans;
        
    }
};