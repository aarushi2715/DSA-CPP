class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {

        sort(s.begin(), s.end());
        sort(g.begin(), g.end());
        int i=0; 
        int j=0; 
        int count = 0;
        while(i<s.size() && j< g.size()){
            if(g[j] <= s[i]){
                count++;
                i++;
                j++;
            }else{
                i++;
            }

        }
        return count;
        
    }
};