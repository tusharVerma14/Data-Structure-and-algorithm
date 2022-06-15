class Solution
{
public:
    void sort012(vector<int> &v)
    {
        int left = 0, mid = s, right = v.size() - 1;
        while (mid <= right)
        {
            if (v[mid] == 1)
                mid++;
            else if (v[mid] == 0)
            {
                swap(v[mid], v[left]); // left k saath swap krne pr bharosa h bcz in starting mid=left              mid++;
                left++;
            }
            else
            {
                swap(v[mid], v[right]);
                right--; // v[mid]==2
            }
        }
    }
}