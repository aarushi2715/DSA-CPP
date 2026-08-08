class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        
     
      for(int i=0; i<nums.size()-1; i++){
        if(nums[i+1]==nums[i]){
            
           nums[i]= nums[i]*2;
            
            nums[i+1]=0;
        
            
            
        }
        

      }
      int k=0;
        for(int j=0; j<nums.size(); j++){
            if(nums[j]!=0){
                nums[k]=nums[j];
                k++;
            }
        }

        while(k<nums.size()){
            nums[k]=0;
            k++;
        }
        return nums;
    }
};