//Backtracking solution 
//Recursively finding the answer by including and excluding the number.

class Solution {
vector<vector<int>> ans;
public:
    int combinationSum(vector<int> combination){
        int sum=0;
        for(int x:combination)
            sum+=x;
        return sum;    
    }
    void combinationCheck(int k,int n,vector<int> combination,int num){
        
        if(k==0){
            if(combinationSum(combination)==n)
               ans.push_back(combination);
            return; 
        }
        
        if(num>9)
            return;
        //Recursion
        
        //Include current number
        combination.push_back(num);
        combinationCheck(k-1,n,combination,num+1);

        //Exclude current number
        combination.pop_back();
        combinationCheck(k,n,combination,num+1);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> combination;
        combinationCheck(k,n,combination,1);

        return ans;
        
    }
};