class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())return false;
        unordered_map<char, int>mp;
        for(char i:s){
            mp[i]++;
        }
        for(char j:t){
            auto it=mp.find(j);
            if(it==mp.end()){
                return false;
            }
            if(it->second>0){
                it->second--;
            }
            else{
                return false;
            }
        }
        return true;
        
    }
};
