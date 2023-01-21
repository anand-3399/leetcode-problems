//{ Driver Code Starts
// C++ program to calculate sum of all numbers present
// in a string containing alphanumeric characters
#include <iostream>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string str)
    {
    	str +="Z";
    	int sum=0;
    	bool flag=false;
    	int number=0;
    	for(auto i:str)
    	{
    	    if(i < 'A')
    	    {
    	        flag=true;
    	        int digit = int(i) -48;
    	        number = number*10 + digit;
    	    }
    	    else
    	    {
    	        flag=false;
    	        sum += number;
    	        number=0;
    	    }
    	}
    	return sum;
    	
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
	// input alphanumeric string
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    Solution obj;
	    cout << obj.findSum(str);
        cout<<endl;
	}
	return 0;
}

// } Driver Code Ends