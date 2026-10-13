class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len=nums.size();
        vector<int>ans(len,1);
        int left_pdt=1;
        int right_pdt=1;
        for(int i=0;i<len;i++){
            ans[i]*=left_pdt;
            ans[len-1-i]*=right_pdt;
            left_pdt*=nums[i];
            right_pdt*=nums[len-1-i];
        }
        return ans;
    }
};
