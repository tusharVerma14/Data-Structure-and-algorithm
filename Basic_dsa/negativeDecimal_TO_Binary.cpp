#include <iostream>
#include<cmath>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int n=6;
    vector <int> v(32);
    while(n!=0){
       int bit=n&1;
      
        v.push_back(bit)
        
       n=n>>1;
     
    }
    cout<<reverse(v.begin(),v.end());
   
#include<iostream>
#include<cmath>
using namespace std ;

int main() 
{
    int n ;
    cin >> n ;  
    n = abs(n) ;
    int min_bits_needed_to_store_n =  1 + (int)(log2( n ) ) ;
    
    for( int i = 0 ; i< 32-min_bits_needed_to_store_n ; ++i )
         cout<< 1; // for displaying the remaining bits equal to 1 out of the total 32 bits 
    
    n = ~n + 1 ;  // Found out the 2's complement of n  

    cout << " " ;
    //Now displaying the actual stuff
    for( int i =  min_bits_needed_to_store_n -1 ; i >=0 ; --i)
        {
            int x  = pow(2 , i) ;
            cout << (n&x) / x ;
        }
  
}

    return 0;
}