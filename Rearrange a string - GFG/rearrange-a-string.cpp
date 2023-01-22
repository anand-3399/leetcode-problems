//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
  public:
    string arrangeString(string str)
    {
        //code here.
        sort(str.begin(), str.end());
        string ans;
        int sum = 0;
        for(auto i:str)
        {
            if(i>='A' && i<='z')
                ans += i;
            else
                sum += int(i - '0');
        }
        if(sum>0)
            ans += to_string(sum);
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout <<ob.arrangeString(s) << endl;
    }
return 0;
}


// } Driver Code Ends