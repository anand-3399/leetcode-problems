#include <bits/stdc++.h>
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j = 0;
        for (int i = 0, l = nums.size(); i < l; i++) {
            if (nums[i] != val)
                nums[j++] = nums[i];
        }
        
        return j;
    }
};