class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int missing = nums.size(); // Initialize missing as the last index
        for (int i = 0; i < nums.size(); i++) {
            missing ^= i ^ nums[i];
        }
        return missing; 
    }
};