#include <bits/stdc++.h>
class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        
        int p1=1, p2=1;
        for(int i=1; i<arr.size(); i++)
        {
            if(arr[i] != arr[i-1])
            {
                arr[p1]=arr[i];
                p1++;
            }
            
        }
        cout<<p1<<" "<<p2;
        return p1;
        
    }
};