#include <bits/stdc++.h>
class Solution {
public:
    int removeElement(vector<int>& arr, int val) {
        int size = 0;
        int j = 0;
        for(int i=0; i<arr.size(); i++)
        {
            // cout<<arr[i]<<" ";
            if(arr[i] != val)
            {
                cout<<arr[i]<<" " <<i <<endl;
                arr[j] = arr[i];
                size+=1;
                j+=1;
            }
        }
        return size;
    }
};