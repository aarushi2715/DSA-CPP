class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      //we are modifying the array in place therefore the k-2 element would be different
      int k=0;
       for( int i=0; i<nums.size(); i++){
        if( k < 2 || nums[i] !=  nums[k-2]){
            nums[k] = nums[i];
            k++;
        }
       }
       return k;
    }
    
};