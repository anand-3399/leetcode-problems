//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
long long findDiff(long long n);

int main(){
    long t;
    cin>>t;
    while(t--){
        long long amount;
        cin>>amount;
        cout<<findDiff(amount)<<endl;
    }
    return 0;
}
// } Driver Code Ends


long long findDiff(long long amount){
    //code
    string a = to_string(amount);
    replace(a.begin(), a.end(), '6', '9');
    long long int actual_amount = stoi(a);
    
    return (long long)(actual_amount - amount);
}