#include <bits/stdc++.h>
class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int left=1;
        for(int right=1; right<arr.size(); right++)
        {
            if(arr[right] != arr[right-1])
            {
                arr[left]=arr[right];
                left+=1;
            }
        }
        
        return left;
        
    }
};