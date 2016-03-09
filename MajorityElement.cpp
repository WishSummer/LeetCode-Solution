class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority = nums.size()/2;
        map<int,int>count;
        for(int i = 0; i < nums.size(); i++)
        {
            ++count[nums[i]];
            if(count[nums[i]] > majority) return nums[i];
        }
    }
};
