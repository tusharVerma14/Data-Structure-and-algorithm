#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s1 = "10101010";
    string s2 = "11001100";
    string ans = "";
    int i = s1.length() - 1;
    int j = s2.length() - 1;
    int carry = 0;

    while (i >= 0 && j >= 0)
    {

        int a = s1[i] - '0'; // s1[i]-48;
        int b = s2[j] - '0';
        cout << "A is : " << a;
        cout << " ,B is : " << b;
        cout << " ,Carry is : " << carry;

        int sum = a + b + carry;
        cout << ",Sum is : " << sum << endl;

        if (sum > 1)
        {

            carry = sum / 2;
            sum = sum % 2;
        }
        else
        {
            carry = 0;
        }
        // ans.push_back(char(sum+48));
        // cout<<"Sum is : "<<sum<<endl;
        // cout<<"Carry is : "<<carry<<endl;
        ans = ans + to_string(sum);

        i--;
        j--;
    }

    while (i >= 0)
    {

        int sum = s1[i] + carry;
        if (sum > 1)
        {
            carry = sum / 2;
            sum = sum % 2;
        }
        else
        {
            carry = 0;
        }
        // ans.push_back(char(sum+48));
        ans = ans + to_string(sum);
        i--;
    }
    while (j >= 0)
    {

        int sum = s2[j] + carry;
        if (sum > 1)
        {
            carry = sum / 2;
            sum = sum % 2;
        }
        else
        {
            carry = 0;
        }
        // ans.push_back(char(sum+48));
        ans = ans + to_string(sum);
        j--;
    }
    // REmember this point

    if (carry == 1)
    {
        ans = ans + to_string(1);
    }
    reverse(ans.begin(), ans.end());
    cout << "Ur ans is : " << ans;

    // PROGRAM IF INPUT ARE IN LONG INT FORMAT
    /*
   long b1=10101010;
   long b2=11001100;
   int ans[10]={0};
   int carry=0;
   int index=0;

   while(b1!=0 && b2!=0 && index<20){
       int d1=b1%10;
       int d2=b2%10;
       b1/=10;
       b2/=10;
        int sum=d1+d2+carry;
       if (sum > 1)
        {
            carry = sum / 2;
            sum = sum % 2;

        }
        else
        {
            carry = 0;
        }
        ans[index++]=sum;
   }

    while(b1!=0 && index<20){
       int d1=b1%10;
         b1/=10;

        int sum=d1+carry;
       if (sum > 1)
        {
            carry = sum / 2;
            sum = sum % 2;

        }
        else
        {
            carry = 0;
        }
        ans[index++]=sum;
   }

    while( b2!=0 && index<20){

       int d2=b2%10;
         b2/=10;
        int sum=d2+carry;
       if (sum > 1)
        {
            carry = sum / 2;
            sum = sum % 2;

        }
        else
        {
            carry = 0;
        }
        ans[index++]=sum;
   }

    if(carry==1)
        ans[index++]=1;

        for(int i=9;i>=0;i--){
           cout<<ans[i];
       }
       */

    return 0;
}