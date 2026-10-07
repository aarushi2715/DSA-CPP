class Solution {
public:
    bool wordPattern(string pattern, string s) {

        // two way mapping 
        unordered_map<char, string> mpp1;
        unordered_map<string, char> mpp2;

        stringstream ss(s);
        string word;

        for( int i=0; i<pattern.size(); i++){
    //we need this to check if the words in the string are lessthan the letters in patteern
            if(!(ss>>word)){
                return false;
            }

            if(mpp1.find(pattern[i]) != mpp1.end()){
                if(mpp1[pattern[i]] != word){
                    return false;
                }

            }else if(mpp2.find(word) != mpp2.end()){
                if(mpp2[word] != pattern[i]){
                    return false;
                }
            }else{
                mpp1[pattern[i]] = word;
                mpp2[word] = pattern[i];
            }


        }
        // we need this to check if thestring has more 
        //words than the letter in the pattern
        if(ss>>word){
            return false;
        }
        return true;



        
    }
};   

