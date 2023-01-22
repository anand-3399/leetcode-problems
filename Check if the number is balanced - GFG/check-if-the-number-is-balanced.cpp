//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool balancedNumber(string s)
	{
	    // code here
	    int n = s.size();
	    int leftSum=0, rightSum=0;
	    for(int i=0; i<n/2; i++)
	    {
	        leftSum += (int)(s[i] - '0');
	        rightSum += (int)(s[n-1-i] - '0');
	    }
	    return (leftSum == rightSum)?true:false;
	}
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string N;
        cin>>N;
        Solution ob;
        cout<<ob.balancedNumber(N)<<endl;
    }
    return 0;
}

// } Driver Code Ends