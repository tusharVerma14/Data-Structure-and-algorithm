#include<bits/stdc++.h>
using namespace std;
int minJumps(vector<int> &v){
    int i=0,cnt=0;
    while(i<v.size()){
        int toJump=v[i];
        i=i+toJump;
        
        cnt++;
        if(i>=v.size()-1) return cnt;
    }
    return -1;
}
int main()
{
    vector<int> v={1,4,3,2,6,7};
    //vector<int> v={1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    cout<<"No of steps are : "<<minJumps(v)<<endl;
 return 0;
}