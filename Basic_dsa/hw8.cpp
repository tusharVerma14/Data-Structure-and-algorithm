#include<iostream>
using namespace std;
int aP(int n){
    return 3*n+7;
}

int bitSet(int a,int b){
    int count =0;
    while(a!=0){
        int bit=a&1;
        if(bit==1)
        count++;
        a=a>>1;
    }

    while(b!=0){
        int bit=b&1;
        if(bit==1)
        count++;
        b=b>>1;
    }
    return count;
    
}

int fibNo(int n){
    int a=0,b=1;
    int c=a+b;
    if(n==1)
    return 0;
    else if(n==2)
    return 1;
    else{
        for(int i=3;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
        }
        return c;
    }
}

void fibSeries(int n){
    int a=0,b=1,c;
  
        for(int i=1;i<=n;i++){
            if(i==1)
            cout<<"0 ";
            if(i==2)
            cout<<"1 ";
            if(i!=1 && i!=2){
            c=a+b;
            a=b;
            b=c;
            cout<<c<<" ";
        }
    }
        
    
}
int main()
{
    cout<<"Nth term of AP is: "<<aP(5)<<endl;
    cout<<"Number of setBig  is :"<<bitSet(12,13)<<endl;
    cout<<"Nth fibonacci number is :"<<fibNo(7)<<endl;
    cout<<"Following is the series of N fibonacci number :"<<endl;
    fibSeries(7);
 return 0;
}