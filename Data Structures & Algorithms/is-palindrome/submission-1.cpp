class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        int n=s.length();
        int l=n-1;
        for(int j=0;j<(n/2)+1;j++){
            while(!isalnum(s[i])){
                i++;
                if(i>n-1){
                    break;
                }
            }
            while(!isalnum(s[l])){
                l--;
                if(l<0){
                    break;
                }
            }
            if(i<n && l>-1){

            
                if(tolower(s[i])!=tolower(s[l])){
                    return false;
                }
                else{
                    i++;
                    l--;
                }
            }
            else{
                break;
            }
        }
        return true;
    }
};
