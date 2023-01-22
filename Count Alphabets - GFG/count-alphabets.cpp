//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int Count(string S);


int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        cout << Count(S) << endl;
    }
return 0;
}


// } Driver Code Ends


int Count(string s){
    //complete the function here
    int ct=0;
    for(auto i:s)
        if(i>='A' && i<='z')
            ct++;
    
    return ct;
}