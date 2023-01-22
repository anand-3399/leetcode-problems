//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
        string cbaSubsequence(string s,int n)
        {
            // code here
            sort(s.begin(), s.end());
            return s;
        }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        Solution a;
        cout<<a.cbaSubsequence(s,n)<<endl;
    }
    return 0;
}
// } Driver Code Ends