#include<iostream>
#include<vector>
using namespace std;
bool isPossible(vector<int> &v,int m,int mid){
    int pageSum=0,studentCount=1;
    for(int i=0;i<v.size();i++){
        if(pageSum+v[i]<=mid){
            pageSum+=v[i];
        }
        else{
            studentCount++;
            if(studentCount>m || v[i]>mid )
                return false;
            pageSum=v[i];
        }

    }
    return true;
    
}
int allocatebooks(vector<int> &v,int m){
    int s=0,sum=0;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
    }
    int e=sum;
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(isPossible(v,m,mid)){// isPosiible is true   --> ans=mid,e=mid-1;
                                // isPossible iss false --> s=mid+1
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}
int main()
{
vector<int> v={40,10,20,30,70,80};
int m=2;
cout<<"Ans is at:> "<<allocatebooks(v,m);
 return 0;
}