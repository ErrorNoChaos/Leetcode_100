class Solution {
public:
    bool isPalindrome(string s) {
        string newstr="";
        for(char ch:s){
            if(isalnum(ch)){
                newstr+=tolower(ch);
            }
        }
        string reverseStr=newstr;
        reverse(reverseStr.begin(),reverseStr.end());
        return newstr==reverseStr;
    }
};