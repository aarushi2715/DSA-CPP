class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        //3 pointer solution 
        //1 is for the last non zero element of nums1 and j is for the last element
        //pf nums 2 and k is for the last element that is 0 of nums1
        //keep updating them and moving backwards and k i the one that will be overwritten and then if j elements are left over simply copy them into k positions
       
       int i = m-1;
        int j = n-1;
        int k = m+n-1;

        while( i>=0 && j>=0){
            if(nums1[i] > nums2[j]){
                nums1[k] = nums1[i];
                i--;
            }else{
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }

        while( j>=0 ){
            nums1[k] = nums2[j];
            j--;
            k--;
        }
        
    }
};