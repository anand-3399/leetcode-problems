class Solution {
public:
    void reverseString(vector<char>& ch) {
        int s = 0;
        int e = ch.size() - 1;
        while(s<e)
            swap(ch[s++],ch[e--]);
        
    } 
};