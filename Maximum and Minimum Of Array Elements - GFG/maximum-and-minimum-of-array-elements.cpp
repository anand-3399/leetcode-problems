#include <iostream>
#include <vector>

using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    vector<int> arr;
	    int max, min;
	    
	    for(int i=0; i<n; i++)
	    {
	        cin>>max;
	        arr.push_back(max);
	    }
	    
	     max=arr[0];
	     min=arr[0];
	     
	     for(auto i:arr)
        {
            if(i>max)
                max=i;
            else if(i<min)
                min=i;
        }
        
        cout<<max<<" "<<min<<endl;
	}
	return 0;
}