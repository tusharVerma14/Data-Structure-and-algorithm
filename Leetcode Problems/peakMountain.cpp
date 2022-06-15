https://leetcode.com/problems/peak-index-in-a-mountain-array/
class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int start = 0, end = arr.size() - 1;
        int mid;
        while (start < end)
        {
            mid = start + (end - start) / 2;
            // this arr[mid] < arr[mid + 1] shows that mid+1 is greater so we can shift satrt to mid+1
            if (arr[mid] < arr[mid + 1])
            { 
                start = mid + 1;
            }
            else
                end = mid;
        }
        return start; // or end
    }
};