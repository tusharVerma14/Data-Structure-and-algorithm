#include<iostream>
using namespace std;
int main()
{
    int arr[10]={1,2,3,6,5,6,7,4};
    int size=8;
    int ans=0;  
     for(int i = 0; i<size; i++ ) {
    	ans = ans^arr[i];
        cout<<ans<<" ";
    }
    
    //cout<<ans;
 return 0;
}