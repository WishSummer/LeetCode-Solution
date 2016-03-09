class Solution {
public:
    int titleToNumber(string s) {
        int result = 0;
        for(int i = 0; i < s.length(); ++i)
        {
            int index = s.length() - i - 1;
            int temp = pow(26,index);
            result = (s[i] - 64)*temp + result;
        }
        return result;
    }
};
