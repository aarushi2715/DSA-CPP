#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



vector<vector<int>> Triplet(vector<int> arr, int target){

    int n = arr.size();
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;

    for(int i=0; i<n-2; i++){
        int requiredSum = target-arr[i];
      
        int l=i+1;
        int r = n-1;
        while(l<r){
                if(arr[l]+arr[r] == requiredSum){
                ans.push_back({arr[i], arr[l], arr[r]});
                l++;
                r--;    
                

                }else if(arr[l]+arr[r]<requiredSum) {
                    l++;
                }else {
                    r--;
                }
        
        }
       
       
       
    }
     return ans; 
    

}

int main() { 
    vector<int> arr = { 5, 4, 6, 78, 10, 3 }; 
    int target = 18; 
    vector<vector<int>> ans = Triplet(arr, target);
    for(auto &it :  ans){
        cout<<it[0]<<" ";
        cout<<it[1]<<" ";
        cout<<it[2]<<endl;

    }

   
        
    return 0; 
}