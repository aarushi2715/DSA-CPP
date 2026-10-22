class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       int i= 0;
       int j = nums.size()-1;
  

       while(i<=j){
        //if i is not val then move forward
        if( nums[i] != val){
            i++;
            //if j is val then move backwards
        }else if( nums[j] == val){

            j--;
        }else{
            //if i is val and j is not val then swap
            nums[i] = nums[j];
            i++;
            j--;
         

        }
       }
       //i will have moved past all the valid elments and swapped all the invalid ones so i's current position will bw the answer no need to make another counter
       return i;

    }   
        
    
};