class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n <= 0)return false;
        double power = log(n)/log(3);
        cout<<power<<endl;
        cout<<round(power);
        return (abs(power - round(power)) < 0.00000000000001);
        }
};
