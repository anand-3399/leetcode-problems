class Solution {
public:
    
    long long int binarySearch(int n)
    {
        
        int s=0,e=n;
        long long int mid;
        long long int ans = -1;
        while(s<=e)
        {
            mid = s + (e-s)/2;
            long long int square = mid * mid;
            if (square == n)
                return mid;
            else if(square < n)
            {
                ans = mid;
                s = mid+1;
            }
            else
            {
                e = mid - 1;
            }
        }
        return ans;
    }
    
    
    int mySqrt(int x) {
        return binarySearch(x);
    }
};