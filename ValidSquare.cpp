//Sorting based approach
class Solution {
public:
    static bool custSort(vector<int>& p1,vector<int>& p2){
        if(p1[0]!=p2[0])
            return p1[0] < p2[0] ;
        else return p1[1] < p2[1];
    }
    int dist(vector<int> &p1,vector<int> &p2){
        return (p1[0]-p2[0])*(p1[0]-p2[0])+(p1[1]-p2[1])*(p1[1]-p2[1]);
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        vector<vector<int>> vs;
        vs.push_back(p1);
        vs.push_back(p2);
        vs.push_back(p3);
        vs.push_back(p4);
        sort(vs.begin(),vs.end(),custSort);
        return dist(vs[0],vs[1])!=0 && dist(vs[0],vs[1])==dist(vs[1],vs[3]) && dist(vs[1],vs[3])==dist(vs[3],vs[2]) && dist(vs[3],vs[2])==dist(vs[2],vs[0]) && dist(vs[1],vs[2])==dist(vs[0],vs[3]);
    }
};
