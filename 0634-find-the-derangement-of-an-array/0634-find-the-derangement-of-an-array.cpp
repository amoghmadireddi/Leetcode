class Solution {
public:
    int findDerangement(int n) {
        if(n <= 1){
            return 0;
        }
        if(n <= 2){
            return 1;
        }
        long prevprev = 0;
        long prev = 1;
        long curr = 0;
        long mod = 1000000007;
        for(int i = 3; i <=n; i++){
            curr = (i - 1) * (prevprev + prev) % mod;
            prevprev = prev;
            prev = curr;
        }
        return (int)curr;
    }
};