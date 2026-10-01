class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> ans;
        unordered_set<int> set;
        int maxE = max(nums1.size(), nums2.size());
        
        for( int i=0; i<nums1.size(); i++){
            
            for( int j=0; j<nums2.size(); j++){
                if(nums1[i] ==  nums2[j]){
                    set.insert(nums1[i]);
                }
                
            }
        
        }
    
        for( auto x : set){
            ans.push_back(x);
        }

        return ans;


        
        
    }
};