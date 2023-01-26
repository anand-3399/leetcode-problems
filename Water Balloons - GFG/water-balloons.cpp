//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    string sequence(string s){
        string ans = "";
        int ct=0;
        ans += s[0];
        for(int i=1; i<s.size(); i++)
        {
            if(s[i] == s[i-1])
                ct+=1;
            else
                ct=0;
            if(ct<2)
                ans+=s[i];
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string st;
        cin>>st;
        
        Solution ob;
        cout<<ob.sequence(st)<<endl;
    }
    return 0;
}
// } Driver Code Ends