class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int c = 0;
        for (int i=0; i<nums.size(); i+=1)
            if(nums[i] != 0){
                swap(nums[i],nums[c]);
                c+=1;
        }
    }
};