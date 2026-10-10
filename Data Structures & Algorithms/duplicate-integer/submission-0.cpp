class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>us;
        for(int i=0;i<nums.size();i++){
            if(us.contains(nums[i])){
                return true;
            }
            else{
                us.insert(nums[i]);
            }
        }
        return false;
        
    }
};