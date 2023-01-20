//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int minChange(string s);

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << minChange(s) << endl;
    }
return 0;
}

// } Driver Code Ends


int minChange(string s) { 
    //complete the function here
    
    set<char>set;
    for(auto i:s)
        set.insert(i);
    
    return (int)abs((int)set.size() - (int)s.size());
    
}
