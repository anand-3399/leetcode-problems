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
    long long temp = amount, result, extra=0;
    vector<int>extra_digits;
    
    while(temp > 0)
    {
        int digit = temp%10;
        if(digit == 6)
            digit = 9;
        extra_digits.push_back(digit);
        temp /= 10;
    }
    
    while(extra_digits.size() > 0)
    {
        int num = extra_digits[extra_digits.size() - 1];
        extra = extra*10 + num;
        extra_digits.pop_back();
    }
    
    return (long long)extra-amount;
}