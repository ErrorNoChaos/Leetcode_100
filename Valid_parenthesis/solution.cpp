class Solution {
public:
    bool isValid(string s) {
        stack<char>stack;
        unordered_map<char,char> pcheck={{')','('},{'}','{'},{']','['}};
        for(char cha:s){
            //means its a opening bracket
            if(pcheck.find(cha)==pcheck.end()){
                stack.push(cha);
            }
            //means its a closing bracket
            else if(!stack.empty() && pcheck[cha]==stack.top()){
                stack.pop();
            }
            else{
                return false;
            }
        }
        return stack.empty();
    }
};