class Solution {
public:
    bool isPalindrome(string s) {
        int l=0;
        int r=s.length()-1;
        while(l<r){
            while(l<r && !alphanum(s[l])){
                l++;
            }
            while(r>l && !alphanum(s[r])){
                r--;
            }
            if(tolower(s[l])!=tolower(s[r])){
                return false;
            }
            l+=1;
            r-=1;

        }
        return true;
    }
    bool alphanum(char ch){
        if(ch>='a' && ch<='z' || ch>='A' && ch<='Z' ||
        ch>='0' && ch<='9' ){
            return true;
        } 
        else{
            return false;
        }
    }
};