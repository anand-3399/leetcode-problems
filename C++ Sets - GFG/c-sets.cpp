//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution{
    public:
    vector<set<int>> setOperations(set<int> A, set<int> B){
        // code here
        vector<set<int>> v;
        set<int> s1, s2, s3;
        // Union on s1
        s1.insert(A.begin(), A.end());
        s1.insert(B.begin(), B.end());
        
        // Intersection on s2
        for (auto itr : B)
        {
            if (A.find(itr) != A.end())
            {
                auto it = A.find(itr);
                s2.insert(*it);
            }
        }
        if(s2.empty())
            s2.insert(0);
        
        
        s3.insert(A.begin(), A.end());

        for (auto it : B)
        {
            auto itr = A.find(it);
            if (itr != A.end())
            {
                s3.erase(*itr);
            }
        }
        
        if(s3.empty())
            s3.insert(0);

        v={s1,s3,s2};
        return v;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int N, M;
        cin>>N>>M;
        set<int> A, B;
        int x;
        for(int i = 0;i < N;i++){
            cin>>x;
            A.insert(x);
        }
        for(int i = 0;i < M;i++){
            cin>>x;
            B.insert(x);
        }
        
        Solution ob;
        vector<set<int>> result = ob.setOperations(A, B);
        for(int i = 0;i < 3;i++){
            for(auto &it: result[i])
                cout<<it<<" ";
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends