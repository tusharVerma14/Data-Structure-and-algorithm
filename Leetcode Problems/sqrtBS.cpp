class solution
{
public:
    int sqrtBS(int n)
    {
        // One of the techinque to USE BINARY SEARCH by making search space
        int start = 0, end = n;
        int ans;
        while (start <= end)
        {
            if (mid * mid == n)
            {
                ans = mid;
            }
            else if (mid * mid < n)
            {
                ans = mid;
                start = mid + 1;
            }
            else
                end = mid - 1;
        }
        return ans;
    }
}