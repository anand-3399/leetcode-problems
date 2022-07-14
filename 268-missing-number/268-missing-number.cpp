class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n=nums.size();
        int sum1=0;
        for(int i=0;i<n;i++)
        {
            sum1+=nums[i];
        }
        int sum=(n*(n+1))/2;
        int number=sum-sum1;
        return number;
    }
};