#include <vector>
#include <climits>

class Solution {
public:
    int maxProfit(vector<int>& prices) {
  
        
        int maxp=0;
        int minp = prices[0];

        for(int i=0; i<prices.size(); i++){
            int profit = prices[i]-minp;
            maxp = max(profit, maxp);
            minp = min(prices[i], minp);
        }
        return maxp;

      
    }
};