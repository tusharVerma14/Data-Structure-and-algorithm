#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid;
    while(start<end){
        mid=(start+end)/2;
        if(arr[mid]==key)
        return mid;
        if(key>arr[mid])
        start=mid+1;
        else
        end=mid-1;
    }
    return -1;
}
int main()
{
    int oddArr[5]={-8,1,3,5,7};
    int evenArr[6]={2,8,13,22,27,90};
    cout<<"position of oddArr is :"<<binarySearch(oddArr,5,3)<<endl;;
    cout<<"position of oddArr is :"<<binarySearch(evenArr,6,0);
 return 0;
}