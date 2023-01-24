//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
    vector<int> fib(int n)
    {
        vector<int>f(n + 2);
        int i;
        f[0] = 0;
        f[1] = 1;
     
        for(i = 2; i <= n; i++)
        {
           f[i] = f[i - 1] + f[i - 2];
        }
        return f;
    }
    
    vector<int> findFibSubset(int arr[], int n) {
        vector<int> ans;
        vector<int> series = fib(n+20);
        sort(series.begin(), series.end());
        for(int i=0; i<n; i++)
        {
            if(binary_search(series.begin(), series.end(), arr[i]))
                ans.push_back(arr[i]);
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        vector<int> answer = ob.findFibSubset(a, n);
        for (int i = 0; i < answer.size(); i++) {
            cout << answer[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends