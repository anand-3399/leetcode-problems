//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    string reverseEqn (string s)
    {
        // code here
        s.push_back('#');   // as number is taken from this SYMBOL only
        vector<string> v;
        int begin = 0;      // this is the number/character beginning index
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] < '0')
            {
                // First we push the number or character present
                v.push_back(s.substr(begin, i - begin));
                begin = i+1;
                
                // Now we push the symbol. As we cannot directly 
                // push char to string vector, we convert char to string
                string temp = "";
                temp += s[i];
                v.push_back(temp);
            }
        }
        
        string ans="";
        // the last string contains # as an extra symbol which we have to ignore it.
        for(int i=v.size()-2; i>=0; i--)
            ans += v[i];
            
        return ans;
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
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends