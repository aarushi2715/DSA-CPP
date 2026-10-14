class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
           vector<int> common(26, INT_MAX);

        for (string word : words) {
            vector<int> freq(26, 0);

            for (char c : word) {
                freq[c - 'a']++;
            }

            for (int i = 0; i < 26; i++) {
                common[i] = min(common[i], freq[i]);
            }
        }

        vector<string> ans;

        for (int i = 0; i < 26; i++) {
            while (common[i] > 0) {
                ans.push_back(string(1, 'a' + i));
                common[i]--;
            }
        }

        return ans;
        
    }
};

/*For example, nums = [2, 3], k = 3:
- At element 2, the prefix sum is 2. We store it.
- At element 3, the prefix sum becomes 5.
- need = 5 - 3 = 2. We find that earlier prefix sum of 2.
- So the subarray [3] has sum 3.*/