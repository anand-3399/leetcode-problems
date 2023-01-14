//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
	public:
   	string  common_String(string s1, string s2){
   	    string s,s4;
   	    // map<char,int>m;
   	    set<char>ss,ss2;
   	    for(int i=0;i<s1.length();i++){
   	        ss.insert(s1[i]);
   	    }
   	     for(int i=0;i<s2.length();i++){
   	        ss2.insert(s2[i]);
   	    }
   	    bool flg = true;
   	    for(auto it : ss2){
   	        if(ss.find(it) != ss.end()){
   	            s+=it;
   	            flg = false;
   	        }
   	    }
   	    if(flg){
   	        s.append("nil");
   	    }
   	    return s;
   	}    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s1, s2;
		cin >> s1 >> s2;
		Solution ob;
		string ans = ob.common_String(s1, s2);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends