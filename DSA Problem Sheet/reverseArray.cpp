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
void reverse(vector<int> &v)
{
    int i = 0, j = v.size() - 1;
    while (i <= j)
    {
        swap(v[i++], v[j--]);
    }
}
int main()
{
    vector<int> v = {1, 2, 6, 5, 4};
    print(v);
    reverse(v);
    print(v);
    return 0;
}