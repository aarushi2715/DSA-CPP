class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i=digits.size()-1; i>=0; i--){
            //if digits are less than 9 then increment and return 
            if(digits[i]<9){
                digits[i]++;
                return digits;
            }
            //if it is = 9 then 
            digits[i] = 0;
        }
        //if every digit is 9
        digits.insert(digits.begin(),1);
        return digits;
        
        
    }
};