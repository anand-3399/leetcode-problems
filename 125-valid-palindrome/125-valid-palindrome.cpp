class Solution {
public:
    char toLowerCase(char ch) {
        if (ch >= 'a' && ch <= 'z') {
            return ch;
        }
        char temp = ch - 'A' + 'a';
        return temp;
    }
    
    bool isPalindrome(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<=j){
            if (isalnum(s[i]) == 0)
                i++;
            else if (isalnum(s[j]) == 0)
                j--;
            else if(toLowerCase(s[i]) != toLowerCase(s[j]))
                return false;
            else{
                i++;
                j--;
            }
        }
        return true;
    }
};