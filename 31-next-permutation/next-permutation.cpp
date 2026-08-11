class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        // the part afte the brreakpoint is always in decreasing order beacuse in the first loop we are finding the first point whee nums[i]<nums[i+1]

        int n = nums.size();
        int index = -1;

        //find breakpoint

        for(int i=n-2; i>=0; i--){
            if(nums[i]<nums[i+1]){
                index = i;
                break;
            }
        }

        //if breakpoint not found then it is the largest permutation just reverse it

        if(index == -1){
            reverse(nums.begin(), nums.end());
            return;
        }


        //swap the breakpoint with the first greatest found element in array

        for(int i =n-1; i>index;i--){
            if(nums[i]>nums[index]){
                swap(nums[i], nums[index]);
                break;
           
            }
        }

        //reverse the rest of the array after breakpoint because we want the smallest possible next permutaion

        reverse(nums.begin()+index+1, nums.end());
        
    }
};