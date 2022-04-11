#include<iostream>
#include<vector>
using namespace std;
int main()
{
 vector<vector<int>> v={{2,3,7},
                        {2,3,7},
                        {4,-9,0}};
// if(v[1]==v[0])
// cout<<"HII!!!";
 v.pop_back();
 for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].size(); j++)
            cout << v[i][j] << " ";
        cout << endl;
    }
 return 0;
}