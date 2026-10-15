class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
      
      //USE INT_MAX here we have to find the minimum
      //if 0 will be used then common will always have minimum 

       vector<int> common(26, INT_MAX);
       vector<string> ans;

       for( string word : words){
        //for ewvery word declare freq array and store the frequency of letters in the map
         vector<int> freq(26, 0);

         for( char c : word){
            freq[c-'a']++;

         }

         for( int i=0; i<26; i++){
            //store the minimum frequnecy of letter across all words in the common array
            common[i] = min(freq[i], common[i]);

         }

       }
        //add it to ans
       for( int i=0; i<26; i++){
        while(common[i]>0){
            //1 is that we want 1 copy in the string format
            //and i+'a' is becuase to get actual ascii valyue
            //earlier we did c-'a'
             ans.push_back(string(1, i+'a'));
             common[i]--;

        }
       }

         return ans;
    }
};

