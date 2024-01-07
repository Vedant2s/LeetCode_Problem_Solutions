class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int u = 0; // Use a single index to track the position to overwrite
        
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != val) {
                nums[u] = nums[i];
                u++;
            }
        }
        
        return u;
    }
};