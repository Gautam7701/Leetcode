class Solution {
public:
    bool isPalindrome(string str) {
        int st =0;
        int end = str.length()-1;
        while(st<=end){
            if(!isalnum(str[st])){
            st++;
            continue;
        }
        if(!isalnum(str[end])){
            end--;
            continue;
        }
        if(tolower(str[st])!=tolower(str[end])){
            return false;
        }
        else{
            st++;
            end--;
        }
        }
        return true;
    }
};