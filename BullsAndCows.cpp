class Solution {
public:
    string getHint(string secret, string guess) {
        int x=0,t=0;
        for(int i=0;i<secret.length();i++)
            if(secret[i]==guess[i])
                x++;
        map<int,int> mp1,mp2;
        for(int i=0;i<secret.length();i++){
            mp2[guess[i]]++;
        }
        for(int i=0;i<secret.length();i++){
            if(mp2[secret[i]]>0){
                t++;
                mp2[secret[i]]--;
            }
        }
        string ans = to_string(x)+"A"+to_string(t-x)+"B";
        return ans;        
    }
};