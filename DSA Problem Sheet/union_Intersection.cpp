#include <bits/stdc++.h>
using namespace std;
int Union(vector<int> &a, vector<int> &b)
{
    // so simple answer using set STL
    set<int> s;
    int cnt = 0;
    for (int i = 0; i < a.size(); i++)
    {
        s.insert(a[i]);
    }
    for (int i = 0; i < b.size(); i++)
    {
        s.insert(b[i]);
    }

    for (auto c : s)
    {
        cout << c << " ";
        cnt++;
    }
    cout << endl;
    return cnt;
}

int Intersection(vector<int> &a, vector<int> &b)
{
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int i = 0, j = 0, cnt = 0;
    set<int> s;
    while (i < a.size() && j < b.size())
    {
        if (a[i] == b[j])
        {
            s.insert(a[i]);
            i++;
            j++;
        }
        else if (a[i] < b[j])
        {
            i++;
        }
        else
        {

            j++;
        }
    }
    for (auto c : s)
    {
        cout << c << " ";
        cnt++;
    }
    cout << endl;
    return cnt;
}
int main()
{
    vector<int> a = {85, 25, 1, 32, 54, 6};
    vector<int> b = {85, 2};
    cout << "UNION is: " << Union(a, b) << endl;
    cout << "INTERSECTION is: " << Intersection(a, b) << endl;
    return 0;
}