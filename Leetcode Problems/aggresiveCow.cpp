#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isPossible(vector<int> &stall, int mid, int k)
{
    int cowCount = 1;
    int lastPosition = stall[0];
    for (int i = 0; i < stall.size(); i++)
    {
        if (stall[i] - lastPosition >= mid)
        {
            cowCount++;
            if (cowCount == k)
                return true;
            lastPosition = stall[i];
        }
    }
    return false;
}
int aggresivecow(vector<int> &stall, int k)
{
    sort(stall.begin(), stall.end());
    int s = 0, sum = 0, ans = -1, maxi = -1;

    for (int i = 0; i < stall.size(); i++)
    {
        maxi = max(maxi, stall[i]);
    }
    int e = maxi;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (isPossible(stall, mid, k))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> stall = {4, 2, 1, 6};
    // vector<int> stall={4,2,8,9,1}; k=3
    int k = 2;
    cout << "Ans is --> " << aggresivecow(stall, k);

    return 0;
}