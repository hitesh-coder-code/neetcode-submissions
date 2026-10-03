class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int count=0;
        int front=0;
        int rear=n-1;
        while(front<=rear){
            if(nums[front]!=val){
                count++;
                front++;
            }
            else{
                int found=0;
                for(;rear>front;rear--){
                    if(nums[rear]!=val){
                        found=1;
                        break;
                    }
                }
                if(found){
                    count++;
                    int temp=nums[rear];
                    nums[rear]=nums[front];
                    nums[front]=temp;
                }
                front++;
            }
        }
        return count;
    }
};