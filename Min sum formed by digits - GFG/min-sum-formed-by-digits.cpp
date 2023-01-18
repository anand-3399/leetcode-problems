//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long int minSum(int arr[], int n)
    {
        // Your code goes here
        if(n==0)
            return 0;
        else if(n==1)
            return arr[0];
        long long int num1=0, num2=0;
        sort(arr, arr+n);
        for(int i=0; i<n; i++)
        {
            if(i%2 == 0)
                num1 = num1*10 + arr[i];
            
            else
                num2 = num2*10 + arr[i];
            
        }
        
        return (long long) num1+num2;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+1];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.minSum(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends