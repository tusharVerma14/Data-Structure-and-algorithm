#include <bits/stdc++.h>
using namespace std;
void rotate(vector<int> &v){
    int n=v.size();
    int last=v[n-1];
    int i = n-1;
    // we can use arr[(i+k)%n]=v[i]  but in this case S.C!=O(1) 
    for (; i-1 >=0; i--)
    {
        v[i]=v[i-1];
    }
    v[i]=last;
    
}
void print(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main(){
    //vector<int> v={9, 8, 7, 6, 4, 2, 1, 3};
    vector<int> v={1, 2, 3, 4, 5};
    print(v);
    rotate(v);
    print(v);
}