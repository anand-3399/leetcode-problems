class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector <int> temp(n);
        for(int i=0; i<nums.size(); i+=1)
            temp[(i+k) % nums.size()] = nums[i];
        
        nums = temp;
    }
};