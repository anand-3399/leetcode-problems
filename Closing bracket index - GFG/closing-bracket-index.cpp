//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        int closing (string s, int pos)
        {
        	//code here.
        	stack<char>st;
        	int index;
        	for(int i=pos; i<s.size(); i++)
        	{
        	    if(s[i] == '[')
        	        st.push('[');
        	    else if(s[i] == ']')
        	    {
        	        st.pop();
        	    }
        	        if(st.empty())
        	            return i;
        	}
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		int pos; cin >> pos;
        Solution ob;
		cout <<ob.closing (s, pos) << '\n';
	}
}
// Contributed By: Pranay Bansal

// } Driver Code Ends