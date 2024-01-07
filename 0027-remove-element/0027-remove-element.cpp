class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> nums2;
        int u=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                nums2.push_back(nums[i]);
                u++;
            }     
        }
        for(int i=0;i<u;i++){
            nums.at(i)=(nums2.at(i));
        }
        return u;
    }
};