class Solution {
public:
    int majorityElement(vector<int>& nums) {

       int res;
       int maj = 0;
       for(int num : nums){
        if(maj == 0){
            res = num;
        }

        if(num == res){
            maj+=1;
        }else{
            maj-=1;
        }

       }
       return res;
        
    }
};