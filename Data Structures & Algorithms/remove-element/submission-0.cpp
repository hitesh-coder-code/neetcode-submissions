class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        std::erase(nums,val);
        return nums.size();
        
    }
};