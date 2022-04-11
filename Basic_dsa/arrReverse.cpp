#include<iostream>
using namespace std;
void reverseArr(int arr[],int size){
    int i=0,j=size-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
void printArray(int arr[],int size){
    for (int i = 0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main()
{
 int arr[10]={12,-6,8,9,47,23,54};
 int size=7;
 reverseArr(arr,size);
 printArray(arr,size);

 return 0;
}