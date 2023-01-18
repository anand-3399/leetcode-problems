//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> inversePermutation(int arr[], int size);

// Driver program to test above function
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        vector<int> ans = inversePermutation(arr, n);
        for (int i = 0; i < n; i++)
        	cout << ans[i] << " ";
    	cout<<endl;
    }
    return 0;
}

// } Driver Code Ends


vector<int> inversePermutation(int arr[], int n) {
    vector<int> ans(arr, arr+n);
    for(int i=0; i<n; i++)
    {
        int position = i+1;
        int value = arr[i];
        
        ans[value-1]=position;
    }
    return ans;
}