#include<iostream>
using namespace std;
void alternateSwap(int arr[],int size){
    int i=0,j=1;
    // while(i<size && j<size){
    //     swap(arr[i],arr[j]);
    //     i=i+2;
    //     j=j+2;

    // }

    for(int i=0;i<size;i=i+2){
        if(i+1<size)
        swap(arr[i],arr[i+1]);
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
    int arr[10]={2,-6,13,85,25,16,17};//{2,-6,13,85,25,16} can also try for this
    int size=7;
    alternateSwap(arr,size);
    printArray(arr,size);

 return 0;
}