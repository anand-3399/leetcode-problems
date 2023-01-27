//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        void swapDigits(string &n1, string &n2)
        {
        	int n=n1.size(), m=n2.size();
        	swap(n1[0], n2[m-1]);
        	swap(n2[0], n1[n-1]);
        }
};

//{ Driver Code Starts.


int main() 
{
   	
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string N1, N2;
   		cin >> N1 >> N2;

   		
        Solution ob;
   		ob.swapDigits(N1, N2);
   		cout << N1 << " " << N2 << "\n";
   	}

    return 0;
}
// } Driver Code Ends