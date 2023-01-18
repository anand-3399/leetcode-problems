//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to find nth number made of only prime digits.
    bool isPrime(int n)
    {
        while(n>0)
        {
            int tmp = n%10;
            if(tmp==2 || tmp== 3 || tmp== 5 || tmp==7)
                n/=10;
            else
                return false;
        }
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                // Not a prime number as it gets divided.
                return false;
            }
        }
        return true;
    }
    int primeDigits(int n)
    {
        //code here
        if (n==1)
            return 2;
        else if(n==2)
            return 3;
        int i, ans;
        int ct=1;   // considering default 2 as prime number we take ct=1 as default
        for(i=3; i<=INT_MAX; i+=1)
        {
            if(ct == n)
                break;
            if(isPrime(i))
            {
                ct++;
                ans=i;
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    // All the above tasks are preprocessing, now you can run testcases
    // and then print the values accordingly
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout << ob.primeDigits(n) << "\n";   
    }
}

// } Driver Code Ends