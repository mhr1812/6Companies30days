// Reverse Polish Notation: Postfix Expression
// Use of stack (LIFO)

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long> ms;
        int l = tokens.size();
        for(int i=0;i<l;i++){
            if(tokens[i]=="+"){
                long x = ms.top();
                ms.pop();
                long y = ms.top();
                ms.pop();
                ms.push(x+y);
            }
                
            else if(tokens[i]=="*"){
                long x = ms.top();
                ms.pop();
                long y = ms.top();
                ms.pop();
                ms.push(x*y);
            } 
            else if(tokens[i]=="-"){
                int x = ms.top();
                ms.pop();
                int y = ms.top();
                ms.pop();
                ms.push(y-x); 
            }
            else if(tokens[i]=="/"){
                long x = ms.top();
                ms.pop();
                long y = ms.top();
                ms.pop();
                ms.push(y/x); 
            }    
            else
                ms.push(stoi(tokens[i]));
        }
        return ms.top();
    }
};