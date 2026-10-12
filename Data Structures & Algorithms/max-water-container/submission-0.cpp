class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0;
        int right=heights.size()-1;
        int max=0;
        while(left<right){
            int m=min(heights[left],heights[right]);
            int area=(right-left)*(m);
            if(area>max){
                max=area;
            }
            if(m==heights[left]){
                left++;
            }
            else{
                right--;
            }

        }
        return max;
        
    }
};
