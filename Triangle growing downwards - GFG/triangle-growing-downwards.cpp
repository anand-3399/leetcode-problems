//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void printTriangleDownwards(string str)
    {
        // Write Your Code here
        int n = str.size();
        for(int i=0; i<n; i++)
        {
            int count=0;
            for(int j=n -2 -i; j>=0; j--)
            {
                cout<<".";
                count++;
            }   
            for(int k=0; k<n-count; k++)
                cout<<str[k];
            
            cout<<endl;
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;

        Solution ob;
        ob.printTriangleDownwards(str);
    }
    return 0;
}
// } Driver Code Ends