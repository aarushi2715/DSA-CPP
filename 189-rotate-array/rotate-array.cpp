class Solution {
public:
    void rotate(vector<int>& nums, int k) {
     int n = nums.size();
     k = k%n;
     reverse(nums.begin(), nums.end());
     reverse(nums.begin(), nums.begin()+k);
     reverse(nums.begin()+k, nums.end());

     

        
        
    }
};


/*BRUTE BUT WOULDNT WORK WHEN THERE IS TOO MANY ELEMENTS TIME COMPLEXITY WILL BE TOO MUCH 
//because k=n times will become the same arraya and then anything bigger than that would just be form 0 to n and it will be remainder of k/n
     for( int i=0; i<k; i++){
        int last  = nums[n-1];
        //the element which is at last of the current array;
        for( int j=n-1; j>0; j--){
            nums[j] = nums[j-1];
            //replace the element eith the element beofre it 

        }
        nums[0] = last;
        //now bring the last element to the front;
     }*/