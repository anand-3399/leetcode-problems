//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    int commonSubseq(string s1, string s2){
        // code here
        for(auto i:s1)
            for(auto j:s2)
                if(i == j)
                    return 1;
        
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S1, S2;
        cin >> S1 >> S2;
        Solution ob;
        cout << ob.commonSubseq(S1, S2) << endl;
    }
    return 0;
}

// } Driver Code Ends