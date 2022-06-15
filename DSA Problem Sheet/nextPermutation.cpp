#include <bits/stdc++.h>
using namespace std;
void print(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
// using inbuilt function
// T.C--->O(n)
void permutation(vector<int> &v)
{
    // if its not possible to permuatedely having lexographically greater numbr then
    // this retrun false but will do permutate by next smaller
    next_permutation(v.begin(), v.end());
}

// logical concept
// T.C--->O(n)
void logicalPermutation(vector<int> &v)
{
    int n = v.size() - 1, pivot = n;
    int i = n;
    while (i >= 0)
    {
        if (v[i - 1] < v[i])
        {
            pivot = i - 1;
            break;
        }
        i--;
    }
    cout << "Pivot elements is :" << v[pivot] << endl;
    if (i < 0)
    {
        reverse(v.begin(), v.end());
        return;
    }
    int j = n;
    while (j >= 0)
    {
        if (v[j] > v[pivot])
        {
            swap(v[j], v[pivot]);
            break;
        }
        j--;
    }
    reverse(v.begin() + pivot + 1, v.end());
}
int main()
{
    vector<int> v = {1, 1, 5};
    // vector<int> v = {3,2,1};
    // vector<int> v = {0, 1, 2, 5, 3, 3, 0};
    print(v);
    // permutation(v);
    logicalPermutation(v);
    print(v);
    return 0;
}