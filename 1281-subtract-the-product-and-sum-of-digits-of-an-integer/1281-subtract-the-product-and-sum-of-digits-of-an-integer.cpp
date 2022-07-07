class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0, prod = 1;
        while(n!=0)
        {
            int rem = n%10;
            sum+=rem;
            prod*=rem;
            n=n/10;
            
        }
        int ans = prod - sum;
        return ans;
    }
};