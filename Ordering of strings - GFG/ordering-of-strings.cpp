//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    vector<string> orderString(string s[], int n)
    {
    	//code here.
    	sort(s,s+n);
        return {s[0],s[n-1]};
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
		string s[n];
		for(int i=0;i<n;i++)
			cin>>s[i];
		
		Solution ob;
		vector<string> res = ob.orderString(s , n);
	    cout<<res[0]<<" "<<res[1]<<endl;
    }
}
// } Driver Code Ends