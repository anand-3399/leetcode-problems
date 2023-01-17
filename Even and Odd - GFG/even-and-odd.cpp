//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    void reArrange(int arr[], int n) {
        // code here
        for(int i=0; i<n; i++)
        {
            // EVEN
            if(i%2==0)
            {
                // if already is Even number
                if(arr[i] %2 == 0)
                    continue;
                else
                {
                    // Find the nearest Even number and swap it
                    for(int j=i+1; j<n; j++)
                    {
                        if(arr[j]%2==0)
                        {
                            swap(arr[i], arr[j]);
                            break;
                        }
                    }
                    
                }
            }
            // ODD
            else
            {
                // if already is Odd number
                if(arr[i] %2 == 1)
                    continue;
                else
                {
                    // Find the nearest Odd number and swap it
                    for(int j=i+1; j<n; j++)
                    {
                        if(arr[j]%2==1)
                        {
                            swap(arr[i], arr[j]);
                            break;
                        }
                    }
                }
            }
        }
    }
};

//{ Driver Code Starts.

int check(int arr[], int n)
{
    int flag = 1;
    int c=0, d=0;
    for(int i=0; i<n; i++)
    {
        if(i%2==0)
        {
            if(arr[i]%2)
            {
                flag = 0;
                break;
            }
            else
                c++;
        }
        else
        {
            if(arr[i]%2==0)
            {
                flag = 0;
                break;
            }
            else
                d++;
        }
    }
    if(c!=d)
        flag = 0;
        
    return flag;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        ob.reArrange(arr,N);
        
        cout<<check(arr,N)<<endl;
    }
    return 0;
}
// } Driver Code Ends