class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }

        int counter = 1; // Initialize counter to 1 since the first element is always unique
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] != nums[i - 1]) {
                nums[counter++] = nums[i];
            }
        }

        return counter;
    }
};