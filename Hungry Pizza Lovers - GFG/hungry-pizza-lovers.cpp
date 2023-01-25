//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


vector<int> permute(vector<vector<int>> &arr, int n);


int main() {
    
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int>> arr(n);
        
        for(int i=0;i<n;i++)
        {
            int a, b;
            cin>> a>> b;
            arr[i].push_back(a);
            arr[i].push_back(b);
        }
        
        vector<int> ans;
        ans = permute(arr, n);
        for(int i=0;i<n;i++)
            cout << ans[i] << "\n";
        
    }
    
	return 0;
}
// } Driver Code Ends


vector<int> permute(vector<vector<int>> &a, int n)
{
    
    // Complete the function
    vector<int> index;
    vector< pair <int,int>> arr;
    for(int i=0; i<n; i++)
    {
        arr.push_back({a[i][0] + a[i][1], i});
    }
    
    sort(arr.begin(), arr.end());
    for(auto i:arr)
        index.push_back(i.second+1);
    
    return index;
}