https : // leetcode.com/problems/rotate-array/
        class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        // O(n)---> S.C O(n)-->T.C
        int n = nums.size();
        vector<int> temp(n);

        for (int i = 0; i < n; i++)
        {
            temp[(i + k) % n] = nums[i];
        }
        nums = temp;

        // O(1) space complexity  O(n)-->T.C
        int n = nums.size();
        k = k % n;// IMP LINE 
        if (n < 2 || n == NULL)
            return;
        reverse(nums.begin(), nums.begin() + n - k);
        reverse(nums.begin() + n - k, nums.end());
        reverse(nums.begin(), nums.end());
    }
};