class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        vector<int> ans;
        unordered_map<int, int> mpp;

        for( int num1: nums1 ){
            mpp[num1]++;
        }

        for( int num2 : nums2){
            if(mpp.find(num2) != mpp.end()){
                if(mpp[num2] != 0){
                     ans.push_back(num2);
                     mpp[num2]--;
                }
                
            }
        }
        
        return ans;

        
    }
};