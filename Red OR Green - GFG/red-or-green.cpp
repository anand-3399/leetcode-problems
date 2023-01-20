//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
       int RedOrGreen(int n,string s) {
        // int c1 = count(s.begin(), s.end(), 'R');
        // int c2 = count(s.begin(), s.end(), 'G');
        return min(count(s.begin(), s.end(), 'R'),count(s.begin(), s.end(), 'G'));
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        string S;
        cin >> S;
        Solution ob;
        cout << ob.RedOrGreen(N,S) << endl;
    }
    return 0;
}
// } Driver Code Ends