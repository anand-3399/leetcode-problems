//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    void strangeSort (int arr[], int n, int k)
    {
    	//code here.
    	vector<int>v;
    	int val = arr[k-1];
    	int index = k-1;
    	for(int i=0; i<n; i++)
    	    if(i!=index)
    	        v.push_back(arr[i]);
    	sort(v.begin(), v.end());
    	
    	for(int i=0; i<index; i++)
    	    arr[i]=v[i];
    	
    	arr[index]=val;
    	for(int i=index+1; i<n; i++)
    	    arr[i]=v[i-1];
    }

};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
		int k; cin >> k;
		int arr[n];
		for (int i = 0; i < n; ++i)
			cin >> arr[i];
        Solution ob;
		ob.strangeSort (arr, n, k);
		for (int i = 0; i < n; ++i)
			cout << arr[i] << " ";
		cout << endl;
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends