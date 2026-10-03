class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=val){
                count++;
            }
            else{
                int j;
                int found=0;
                for(j=i+1;j<n;j++){
                    if(nums[j]!=val){
                        found=1;
                        break;
                    }
                }
                if(found){
                    int temp=nums[j];
                    nums[j]=nums[i];
                    nums[i]=temp;
                    count++;
                }
                
            }
        }
        return count;
        
    }
};