class Solution {
public:
    /*
    int peakIndexInMountainArray(vector<int>& arr) {
        int s = 0;
        int e = arr.size() - 1;
        int mid;
        while(s<e)
        {
            mid = s + (e-s)/2;
            if(arr[mid] < arr[mid+1])
                s = mid + 1;
            else
                e = mid;
        }
        return s;
    }
    */
    int binarySearch(vector<int>& arr, int s, int e){
        int ans = -1;
        if (s > e)
            return ans;
        
        int mid = s + (e - s) / 2;
        
        if (arr[mid] < arr[mid+1])
            return binarySearch(arr, mid + 1, e);
        else if (arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1])
            return mid;
        else
            return binarySearch(arr, s, mid-1);
    }
    int peakIndexInMountainArray(vector<int>& arr) {
        int ans = binarySearch(arr,0,arr.size() - 1);
        return ans;
    }
    
};