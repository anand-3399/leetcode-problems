//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

string printNumber(string , int);

// User function pasted here
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s,temp;
		cin>>s;
		int i,len=s.length();
		
		cout << printNumber(s,len) << "\n";
	}
	return 0;
}
// } Driver Code Ends


//User function template for C++

//Function to find matching decimal representation of a string as on the keypad.
string printNumber(string s, int n) 
{
    //code here
    map<char,char> mp;
    mp['a']='2';
    mp['b']='2';
    mp['c']='2';
    mp['d']='3';
    mp['e']='3';
    mp['f']='3';
    mp['g']='4';
    mp['h']='4';
    mp['i']='4';
    mp['j']='5';
    mp['k']='5';
    mp['l']='5';
    mp['m']='6';
    mp['n']='6';
    mp['o']='6';
    mp['p']='7';
    mp['q']='7';
    mp['r']='7';
    mp['s']='7';
    mp['t']='8';
    mp['u']='8';
    mp['v']='8';
    mp['w']='9';
    mp['x']='9';
    mp['y']='9';
    mp['z']='9';
    
    
    for(int i=0; i<n; i++)
        s[i] = mp[s[i]];
    
    return s;
}



