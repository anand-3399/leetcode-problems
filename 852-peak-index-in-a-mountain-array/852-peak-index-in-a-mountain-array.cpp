class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s=0, e=arr.size() -1, mid;
        
        while(s<e)
        {
            mid = s+(e-s)/2;
            if(arr[mid] < arr[mid+1]) s = mid+1;
            else e = mid;
        }
        return s;
    }
};