class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

       unordered_map<int, int> mpp;
       //because we alrrady have 0 before starting
       mpp[0] = 1;
       int prefix = 0;
       int ans = 0;

       for ( int i=0; i<nums.size(); i++){
        prefix += nums[i];
        //calcualte need 
        int need =  prefix - k;

        if( mpp.find(need) != mpp.end()){
            ans += mpp[need];
        }
        //we are storing prefix sum inside the map and if somehow need = prefix of sum 
        //other element then we know that some subarray had sum = k
        //its like prefix[4] = 5 - k= 3
        //which is eqaul to 2 
        //we need to find 2 becaus ew eknow that somehwere 3 occured 
          mpp[prefix]++;
       }

       return ans;

        
    }
};