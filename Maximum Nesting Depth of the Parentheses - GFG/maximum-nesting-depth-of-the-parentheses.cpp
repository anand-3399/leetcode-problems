//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int maxDepth(string s) {
        // code here
        vector<char> vct;
        int count = 0;
        for(auto i:s)
        {
            int maxSize = vct.size();
            count = max(count ,maxSize);
            if(i=='(')
                vct.push_back('(');
            else if(i==')')
                vct.pop_back();
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution obj;
        int ans = obj.maxDepth(s);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends