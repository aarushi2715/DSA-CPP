class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

      //to check that it cn be constructed would lead to many if else ladders
      //so check if cannot be made using magazine

      unordered_map<char, int> mpp;
      for(char c : magazine){
        mpp[c]++;
      }
      for( char c : ransomNote ){
        if(mpp.find(c) == mpp.end() || mpp[c]==0){
            return false;
        }
        //decrement the freq as well
        mpp[c]--;
      }

      return true;
    }
};