//{ Driver Code Starts
// A Sample C++ program for beginners with Competitive Programming

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    
    // A[]: input array
    // N: input array
    //Function to sort the binary array.
    void binSort(int a[], int n)
    {
        // 1.44 seconds
        // sort(a, a+n);
        
        // 1.08 seconds
        int ct = count(a, a+n, 0);
        if(ct == 0 || (int)count(a, a+n, 1) == 0)
            return;
        
        for(int i=0; i<n; i++)
        {
            if(ct>0)
            {
                a[i] = 0;
                ct--;
            }
            else
                a[i]=1;
        }
        
    }
};

//{ Driver Code Starts.
int main() {
	int T;
	cin>>T;
	// Input the number of testcases
	while(T--)
	{
	    int N;
	    cin>>N; //Input size of array N
	    int A[N]; 
	    
	    for(int i = 0; i  < N; i++)
	      cin>>A[i];
	      
	    Solution obj;
	    obj.binSort(A,N);
	    
	    for(int x:A)
	    cout<<x<<" ";
	      
	    cout<<endl;
	}
	return 0;
}




// } Driver Code Ends