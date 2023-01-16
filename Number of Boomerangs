// using map to store the adjacent point distance for a selected point and calculating the number of boomerangs

class Solution {
public:
    int dist(vector<int> &p1,vector<int> &p2){
        return (p1[0]-p2[0])*(p1[0]-p2[0]) + (p1[1]-p2[1])*(p1[1]-p2[1]);
    } 
    int numberOfBoomerangs(vector<vector<int>>& points) {
        int n = points.size(),ans=0;
        for(int i=0;i<n;i++){
            map<int,int> mp;
            for(int j=0;j<n;j++){
                if(i==j)
                    continue;
                mp[dist(points[i],points[j])]++;
            }
            for(auto x:mp){
                ans+=x.second*(x.second-1);
            }
        }
        return ans;
    }
};
