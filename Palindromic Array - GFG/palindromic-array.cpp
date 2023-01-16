//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/
#include<bits/stdc++.h>
class Solution {
public:
    bool checkPalindrome(int x) 
    {
        string convertedNumber = to_string(x);
  
        string reverseString = convertedNumber;
        reverse(reverseString.begin(),reverseString.end());
        return reverseString == convertedNumber ? true : false;
    }
    int PalinArray(int arr[], int n)
    {
    	for(int i=0; i<n; i++)
    	{
    	    if(!checkPalindrome(arr[i]))
    	        return 0;
    	}
    	return 1;
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
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends