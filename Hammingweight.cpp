class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count;
        for(; n != 0; count ++)
        {
            n &= n-1;
        }
        return count;
    }
};
