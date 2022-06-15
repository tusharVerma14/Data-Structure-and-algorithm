#include <bits/stdc++.h>
using namespace std;
// approach1 will be direcly using sort T.C=O(nlogN)
pair<int, int> kthMaxMin(vector<int> &v, int k)
{
    pair<int, int> p;
    priority_queue<int, vector<int>, greater<int>> maxi;
    priority_queue<int> mini;
    for (int i = 0; i < v.size(); i++)
    {
        maxi.push(v[i]);
        mini.push(v[i]);
    }
    for (int i = 0; i < k - 1; i++)
    {
        maxi.pop();
        mini.pop();
    }   
    p.first = maxi.top();
    p.second = mini.top();

    return p;
}

int main()
{
    vector<int> v = {2, 7, 6, 5, 8, 12, -8};
    int k = 3;
    pair<int, int> ans = kthMaxMin(v, k);
    cout << k << "th Maximum no is : " << ans.first << endl
         << k << "th Minimum no is : " << ans.second << endl;
    return 0;
}


sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int i = 0, j = 0,cnt=0;
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
            s.insert(a[i]), i++;
        }
        else
        {
            s.insert(b[j]);
            j++;
        }
    }
    while (i < a.size())
        s.insert(a[i++]);

    while (j < b.size())
        s.insert(b[j++]);