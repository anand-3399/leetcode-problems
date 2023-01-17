//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

void SumArray(int[], int);

// } Driver Code Ends
//User function Template for C++

// arr is the array
// n is the number of element in array
void SumArray(int arr[], int n)
{
    // you code here
    int sum=0;
    for(int i=0; i<n; i++)
        sum+=arr[i];
        
    for(int i=0; i<n; i++)
        arr[i] = sum-arr[i];
    
    
}

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int arr[n];
        for(int i = 0; i < n; i++)
          cin>>arr[i];

         SumArray(arr, n);
         for(int i = 0; i < n; i++)
            cout << arr[i] <<" ";

             
        cout <<endl;
    }
    return 0;
}
// } Driver Code Ends