//Mathematical approach
//Brute force: O(n2)
//Optimized: O(n)

class Solution {
public:
    // int total(vector<int>& nums,int i){
    //     int n=nums.size(),sum=0;
    //     for(int j=i;j<i+n;j++){
    //         sum+=(j-i)*nums[j%n];
    //     }
    //     return sum;
    // }
    int maxRotateFunction(vector<int>& nums) {
        int n=nums.size(),sum=0,f=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            f+=i*nums[i];
        }
        int ans = f;
        for(int i=n-1;i>0;i--){
            f += sum-n*nums[i];
            ans =max(ans,f);
            
        }
        return ans;
    }
    
};