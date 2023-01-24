//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    void sortIt(long long arr[], long long n)
    {
        //code here.
        vector<int>v1, v2;
        for(int i=0; i<n; i++)
        {
            // if odd
            if(arr[i]&1)
                v1.push_back(arr[i]);
            else
                v2.push_back(arr[i]);
        }
        sort(v1.begin(), v1.end(), greater<int>());
        sort(v2.begin(), v2.end());
        
        copy(v1.begin(), v1.end(), arr);
        copy(v2.begin(), v2.end(), arr+v1.size());
        
    }
};

//{ Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long arr[n];

        for (int i = 0; i < n; i++) 
            cin >> arr[i];
        
        Solution ob;
        ob.sortIt(arr, n);

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends