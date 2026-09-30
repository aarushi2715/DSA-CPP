class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map< char, int> mpp;
        for(int i=0; i<s.length(); i++){
            mpp[s[i]]++;
        }
        //return index you can just do it using index 
        for( int i=0; i<s.length(); i++){
            if(mpp[s[i]] == 1){
                return i;
            }
        }
        return -1;

        
    }
};