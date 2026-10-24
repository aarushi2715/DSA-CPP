class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       unordered_map<int, int> mpp;
       vector<int> ans;
       int count =0;

       for( int i=0; i<nums.size(); i++){
          mpp[nums[i]]++;
          int a = mpp[nums[i]];
         if( a < 3){
            ans.push_back(nums[i]);
            count++;
         }

       }
       nums = ans;
        return count;
    }
    
};