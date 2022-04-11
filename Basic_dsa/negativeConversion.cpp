#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
    int origNum=-6;
    int newNum=abs(origNum);
    int arr[32];
    int size=sizeof(arr)/sizeof(arr[0]);

    int rem,i=0;
  
    while(newNum!=0){
    rem=newNum%2;
    arr[i]=rem;
   newNum/=2;
   i++;
    }
    reverse(arr,arr+size);

    

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i];
    }
    
 return 0;
}