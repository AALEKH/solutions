class Solution {
public:
    int numWays(int n, int k) {
        if(n==0) return 0;
        if(n==1) return k; // K ways to paint this fence
        int same = k;
        int diff = k*(k-1);
        for(int i = 3; i <= n; i++){
            same  = diff;
            diff = (same+diff)*(k-1);
        }
        return same+diff;
    }
};
