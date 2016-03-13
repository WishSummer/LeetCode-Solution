class Solution {
int res[5000];
public:
    int climbStairs(int n) {
        if(res[n]!= 0)
        {
            return res[n];
        }
        if(n == 0 || n == 1)return 1;
        else
        {
            res[n] = climbStairs(n - 1) + climbStairs(n - 2);
            return res[n];
        }
    }
};
