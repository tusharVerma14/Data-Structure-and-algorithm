#include<bits/stdc++.h>
using namespace std;
void print(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
void change(vector<int> &v){
    int i=0,j=v.size()-1;
    while(i<=j){
        if(v[i]<0)i++;
        else if(v[j]>0) j--;
        else
        swap(v[i++],v[j--]);
    }
}
int main()
{
    vector<int> v={-12, 11, -13, -5, 6, -7, 5, -3, -6};
    print(v);
    change(v);
    print(v);

 return 0;
}