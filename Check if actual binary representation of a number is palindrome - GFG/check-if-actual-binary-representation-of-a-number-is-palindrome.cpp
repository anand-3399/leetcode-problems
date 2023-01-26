//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	int binaryPalin (long long int n)
	{
	    // Your Code Here
	    string s = bitset<64>(n).to_string().substr(64 - log2(n));
	    string temp=s;
	    reverse(temp.begin(), temp.end());
	    return (temp == s)?1:0;
	}
};

//{ Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		long long int n; cin >> n;
		Solution ob;
		cout << ob.binaryPalin (n) << endl;
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends