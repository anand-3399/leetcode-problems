//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
  public:
    string gameResult (string s)
    {
        string result;
        if(s == "RR" || s == "PP" || s == "SS")
            return "DRAW";
        if(s == "RP" || s == "PS" || s == "SR")
            return "B";
        else
            return "A";
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.gameResult (s) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends