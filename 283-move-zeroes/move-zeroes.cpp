class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //i can make a reader and a writer pointer here too
        //takse k and update it only when i is not 0 
        //otherwise dont and incrementk only when it is updated
        int k=0;
     
         for( int i=0; i<nums.size(); i++){
            if ( nums[i] != 0){
                nums[k] = nums[i];
                k++;
           
                

            } 
         }

         int count  = nums.size()-k;
         while( count>0){
            nums[k] = 0;
            k++;
            count--;
         }
        
    }
};