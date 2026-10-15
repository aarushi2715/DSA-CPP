class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int left =0; 
        int right = height.size()-1;
        //keep track of mAX area
        int ans = INT_MIN;
        
        while(left < right){

            int currArea = min(height[left], height[right]) * (right - left);
            ans = max(ans, currArea);
            //greedy approach if heigh[i] is less then try to move the pointe forward
            //if left < right then move left
            if(height[left] < height[right]){
                left++;
            }else{
                //if right< left then move right 
                //but for the left == right case we can move any pointer
                //and since both the condition do the same function just combine in one line 
                right--;
            }



        }

        return ans;
    }
};