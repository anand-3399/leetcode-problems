//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends


pair<long long, long long> getMinMax(long long arr[], int n) {
    pair<long long, long long> result;
    long long int min=INT_MAX;
    long long int max=0;
    for(int i=0; i<n; i++)
    {
        if(min > arr[i])
            min = arr[i];
        if(max < arr[i])
            max = arr[i];
    }
    result.first = min;
    result.second= max;
    return result;
}