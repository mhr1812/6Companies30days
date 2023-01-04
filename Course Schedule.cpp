//Kahn's algo
class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>  adj(numCourses);
        vector<int> degree(numCourses,0);
        for(auto &p:prerequisites){
            adj[p[1]].push_back(p[0]);
            degree[p[0]]++;
        }
        queue<int> q;
        for(int i=0;i<numCourses;i++){
            if(degree[i]==0)
                q.push(i);
        }
        while(!q.empty()){
            int x = q.front();
            q.pop();
            numCourses--;
            for(auto e:adj[x]){
                degree[e]--;
                if(degree[e]==0){
                    q.push(e);
                    
                }
                    
            }
        }
        return numCourses==0;
    }
};