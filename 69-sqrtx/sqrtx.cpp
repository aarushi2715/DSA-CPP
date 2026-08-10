class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) return x;
        
        int left = 1;
        int right = x / 2;
        int ans = 0;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            // Use division instead of mid * mid to prevent integer overflow
            if (mid <= x / mid) {
                ans = mid; // mid could be the answer, save it
                left = mid + 1; // look for a larger integer
            } else {
                right = mid - 1; // mid is too large, look for a smaller integer
            }
        }
        
        return ans;
    }
};
