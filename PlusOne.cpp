class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 0;
        int currentBit = digits.size() - 1;
        digits[currentBit] += 1;
        if(digits[currentBit] > 9)
        {
            carry = 1;
            digits[currentBit] = digits[currentBit] - 10;
            currentBit = currentBit - 1;
            while(carry)
            {
                if(currentBit == -1)
                {
                    vector <int>::iterator it = digits.begin();
                    digits.insert(it,1);
                    break;
                }
                digits[currentBit] += 1;
                if(digits[currentBit] > 9)
                {
                    carry = 1;
                    digits[currentBit] = digits[currentBit] - 10;

                }
                else
                {
                    carry = 0;
                }
                currentBit = currentBit - 1;

            }
        }

        return digits;
    }
};
