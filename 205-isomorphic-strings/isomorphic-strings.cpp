class Solution {
public:
    bool isIsomorphic(string s, string t) {

        if( s.size() != t.size()){
            return false;
        }
       unordered_map<char, char> mpp1;
       unordered_map<char, char> mpp2;

       for( int i=0; i< s.size(); i++){
        //find the character in the map
        //check if its mapped to the correct character we want it to be mapped to
        if(mpp1.find(s[i]) != mpp1.end()){
            if(mpp1[s[i]] != t[i]){
                return false;
            }
            //do this for both the maps. we have to check the mapping in both
        }else if( mpp2.find(t[i]) != mpp2.end()){
            if( mpp2[t[i]] != s[i]){
                return false;
            }
        }else{
            //mapping the characters in both the strings to their respective characters in the other string
            //go sequentially according to index
            mpp1[s[i]] = t[i];
            mpp2[t[i]] = s[i];
        }
        

       }

       return true;

       

    }
};