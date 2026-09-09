#include <string>

class Solution {
public:
    std::string countAndSay(int n) {
        // Base case
        if (n == 1) return "1";
        
        // Iteratively build the sequence from 1 to n
        std::string current = "1";
        
        for (int i = 2; i <= n; ++i) {
            std::string next_string = "";
            int len = current.length();
            
            int j = 0;
            while (j < len) {
                char ch = current[j];
                int count = 0;
                
                // Count consecutive occurrences of the current character
                while (j < len && current[j] == ch) {
                    count++;
                    j++;
                }
                
                // Append the count followed by the character (Run-Length Encoding)
                next_string += std::to_string(count) + ch;
            }
            
            current = next_string;
        }
        
        return current;
    }
};
