https : // www.geeksforgeeks.org/find-a-triplet-that-sum-to-a-given-value/
class Solution
{
public:
    vector<vector<int>> tripletSum(vector<int> v, int key)
    {
        vector<vector<int>> ans;
        for (int i = 0; i < v.size(); i++)
        {
            int left = i + 1, right = v.size() - 1;
            while (left < right)
            {
                if (v[i] + v[left] + v[right] == key)
                {
                    ans.push_back({v[i], v[left], v[right]});
                }
                int x = v[left], y = v[right];
                while (left < right && v[left] == x)
                    left++;
                while (left < right && v[right] == y)
                    right--;
                else if (v[i] + v[left] + v[right] < key)
                    left++;
                else right--;
                while (i + 1 < v.size() && v[i] == v[i + 1])
                    i++;
            }
        }
        return ans;
    }
}