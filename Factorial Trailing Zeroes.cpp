//RECURSIVE + ITERATIVE APPROACH
class Solution {
public:
    
    int trailingZeroes(int n) {
        //recursive
        return n==0?0:n/5+trailingZeroes(n/5);

        //iterative
        // int result = 0;
        // for(int i=5;n/i>0;i*=5){
        //     result+=n/i;
        // }
        // return result;
    }
};
