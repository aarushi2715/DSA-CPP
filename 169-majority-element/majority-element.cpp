class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int maj = nums.size()/2;
        int ans;

        unordered_map<int,int>mpp;

        for( int i=0; i<nums.size(); i++){

            mpp[nums[i]]++;
        
            
            if(mpp[nums[i]] > maj){
                ans = nums[i];
                break;
            }

        }  

        return ans;
      
        
    }
};