//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	string removeDuplicates(string str) {
	    // code here
	    /*
	    int index=0;
	    string ans="";
	    int size = str.size();
	    for(int i=0; i<size; i++)
	    {
	       int j;
	       for(j=0; j<i; j++)
	       {
	           if(str[i] == str[j])
	            break;
	       }
	       if(i==j)
	            ans+=str[i];
	    }
	    return ans;
	    */
	   // Method 2
	    string ans = "";
	    vector<char> v;
	    for(auto i:str)
	        if(find(v.begin(), v.end(), i) == v.end())
	            v.push_back(i);
	    for(auto i:v)
	        cout<<i<<"";
	        
	    return ans;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends