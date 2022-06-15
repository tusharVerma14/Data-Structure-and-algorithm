#include <bits/stdc++.h>
using namespace std;
// VIMP ALGORITHM
//  kadens algorithm T.C --> O(n) S.C-->O(1)
int maxiSubarray(vector<int> v)
{
    int maxi = INT_MIN;
    int sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
        maxi = max(sum, maxi);
        if (sum < 0)
            sum = 0;
    }
    return maxi;
}

// brute force for maximum subarray with T.C of O(n^2) and S.C-->O(1)
int bruteForceMaxi(vector<int> v)
{
    int maxi = INT_MIN;
    int sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sum = 0;
        for (int j = i; j < v.size(); j++)
        {
            sum += v[j];
            maxi = max(maxi, sum);
        }
    }
    return maxi;
}

int main()
{
    // vector<int> v = {-1, 2, -2, 5, 7, -3, 1};
    // vector<int> v = {-2, -3, 4, -1, -2, 1, 5, -3};
    vector<int> v = {2, 6, 8, 1, 4};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // cout << "Maximum subarray above array is : " << maxiSubarray(v) << endl;
    cout << "Minimum subarray above array is " << miniSubarray(v) << endl;
    // cout << "Brute Force Maximum subarray above array is : " << bruteForceMaxi(v) << endl;

    maxiSubarrayIndex(v);
    // miniSubarrayIndex(v);

    return 0;
}