class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int l=nums.size();
        int final_count=0;
        int count=0;
        for(int i=0;i<l;i++){
            if(nums[i]==1){
                count++;
            }
            if(nums[i]==0){
                if(final_count<count){
                    final_count=count;
                }
                count=0;
            }

        }
        if(final_count<count){
            final_count=count;
        }
        return final_count;
        
    }
};