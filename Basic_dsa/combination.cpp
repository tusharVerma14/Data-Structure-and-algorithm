#include<iostream>
using namespace std;
int fact(int n){
	if(n==0 || n==1)
		return 1;
	else
		return n*fact(n-1);
}

int combi(int n,int r){
	int ans=fact(n)/(fact(n-r)*fact(r));
	return ans;
}
int main()
{
    cout<<"Fcatorial ans is: "<<fact(5)<<endl;
cout<<"ANS IS: "<<combi(8,2);
 return 0;
}