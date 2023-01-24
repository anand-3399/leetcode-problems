//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// returns required number of subarrays
	int numOfsubarrays(int arr[], int n) {
	    // code here
	    int sum = n;
	    for(int i=0; i<n; i++)
	    {
	        int localSum=arr[i];
	        int localProd=arr[i];
	        for(int j=i; j<n; j++)
	        {
	            if(j!=i)
	            {
                    localSum += arr[j];
                    localProd *=arr[j];
                    // cout<<localSum<<" "<<localProd<<endl;
	                if(localSum == localProd)
                    {
                        // cout<<i<<" "<<j<<endl;
                        sum++;
                        break;
                    }
	            }
	        }
	    }
	    return sum;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.numOfsubarrays(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends