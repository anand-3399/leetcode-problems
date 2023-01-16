//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}
// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    // Your code here
    int result=0;
    while(n>0)
    {
        int digit=n%10;
        if(digit == 0)
            digit=5;
        result = result*10 + digit;
        n=n/10;
    }
    int reverse_result=0;
    // int remainder;
    while(result > 0) {
        int remainder = result % 10;
        reverse_result = reverse_result * 10 + remainder;
        result /= 10;
    }

    
    return reverse_result;
    
}