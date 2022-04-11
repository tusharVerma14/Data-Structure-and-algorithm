#include<iostream>
using namespace std;
int maxArr(int arr[],int size){
    int maxi=INT_MIN;
    for (int  i = 0; i <size; i++)
    {
        if(arr[i]>maxi)//or maxi=max(maxi,arr[i]) instead of line 7,8
        maxi=arr[i];
    }
    return maxi;
    
}

int minArr(int arr[],int size){
    int mini=INT_MAX;
    for (int  i = 0; i <size; i++)
    {
        if(arr[i]<mini)//or mini=min(mini,arr[i]) instead of line 18,19
        mini=arr[i];
    }
    return mini;
    
}
int main()
{
    int arr[10]={2,48,42,-6,3};
    int size=5;//there is no way to provide this size by any formula thrfore we explicitly write this
    cout<<"Maximum number in array is: "<<maxArr(arr,size)<<endl;
    cout<<"Minimum number in array is: "<<minArr(arr,size)<<endl;
 return 0;
}