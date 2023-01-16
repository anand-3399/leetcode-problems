//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
vector<int> formatArray(vector<int> a,int n);
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		vector<int>  b;
		b=formatArray(a,n);
		int flag=1;
		if(b.size()==n){
			for(int i=1;i<n;i+=2)
				if(b[i]<b[i-1])
					flag=0;
			if(flag==0)
				cout<<"0\n";
			else{
				sort(a.begin(),a.end());
				sort(b.begin(),b.end());
				for(int i=0;i<n;i++){
					if(a[i]!=b[i])
						flag=0;
				}
				cout<<flag<<endl;
			}
		}
		else
			cout<<"0\n";
	}
}
// } Driver Code Ends


/*Complete the function below*/
vector<int> formatArray(vector<int> arr,int n)
{
    //add code here.
    for(int i=1; i<n; i+=2)
    {
        if(arr[i]>arr[i-1])
            continue;
        else if(arr[i]<arr[i-1])
            swap(arr[i], arr[i-1]);
        
    }
    
    return arr;

}