class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>hash;

        for(char ch:s){
            hash[ch]+=1;
        }
        for(char ch:t){
            hash[ch]-=1;
        }
        for(auto &s:hash){
            if(s.second!=0){
                return false;
            }
        }
        return true;

    }
};