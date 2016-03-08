class Solution {
public:
    int addDigits(int num) {
        int floor = (num - 1)/9;
        return num - 9 * floor;
    }
};
