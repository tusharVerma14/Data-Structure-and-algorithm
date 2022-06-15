// i/p:-7,9,1,2,3 pivot can be anyone among 1 or 9
class Solution
{
public:
    int pivotSandR(vector<int> v)
    {

        int left = 0, right = v.size() - 1;
        // for 1 to be pivot
        while (left < right)
        {
            int mid = start + (end - start) / 2;
            if (v[mid] > v[0]) // line 1
                start = mid + 1;
            else
                end = mid; // line 2
        }
        return v[e]; // or s
    }
    // for 9 to be pivot
    while (left < right)
    {
        int mid = start + (end - start) / 2;
        if (v[mid] > v[0]) // line 1
            start = mid;
        else
            end = mid - 1; // line 2
    }
    return v[e]; // or s
}

