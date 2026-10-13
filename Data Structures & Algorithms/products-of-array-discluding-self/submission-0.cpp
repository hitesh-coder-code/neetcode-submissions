class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len=nums.size();
        vector<int>ans(len);
        vector<int>left_pdt(len);
        vector<int>right_pdt(len);
        left_pdt[0]=1;
        right_pdt[len-1]=1;
        for(int i=1;i<len;i++){
            left_pdt[i]=left_pdt[i-1]*nums[i-1];
            right_pdt[len-1-i]=right_pdt[len-i]*nums[len-i];
        }
        for(int i=0;i<len;i++){
            ans[i]=left_pdt[i]*right_pdt[i];
        }
        return ans;
    }
};
