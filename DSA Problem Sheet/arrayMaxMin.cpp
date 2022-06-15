#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
struct Pair
{
    int max;
    int min;
};
// approch 1 with no of comparison= 2*(n-2)+1
// Pair maxMin(vector<int> &v){
//     int n=v.size();
//     int maxNo,minNo;
//     struct Pair p;
//     if(n==1){
//         maxNo=v[0];
//         minNo=v[0];
//     }
//     else{
//         if(v[0]>v[1]){ // 1 comparison
//             maxNo=v[0];
//             minNo=v[1];
//         }
//         else{
//             maxNo=v[1];
//             minNo=v[0];
//         }

// for(int i=2;i<n;i++){
//         if(v[i]>maxNo) //n-2 comparison
//             maxNo=v[i];
//         if(v[i]<minNo) // n-2 comparison
//             minNo=v[i];
// }
//         p.max=maxNo;
//         p.min=minNo;
//     return p;
//     }
// }

// approach 2 with no of comapasion=3*(n-2)/2 ()
Pair maxMin(vector<int> &v)
{
    int n = v.size();
    int maxNo, minNo;
    struct Pair p;
    if (n == 1)
    {
        maxNo = v[0];
        minNo = v[0];
    }
    else
    {
        if (v[0] > v[1])
        { // 1 comparison
            maxNo = v[0];
            minNo = v[1];
        }
        else
        {
            maxNo = v[1];
            minNo = v[0];
        }
    }
    int i = 2;
    while (i + 1 < n)
    { // n-2 comparison
        if (v[i] > v[i + 1])
        {                     // n-2 comparison
            if (v[i] > maxNo) // n-2 comparison
                maxNo = v[i];
        }

        else
        { // v[i]<v[i+1]
            if (v[i] < minNo)
                minNo = v[i];
        }
        i = i + 2;
    }
    p.max = maxNo;
    p.min = minNo;
    return p;
}

int main()
{
    vector<int> v = {1, 7, 3, 12, 18, 0, 4};
    struct Pair p = maxMin(v);
    cout << p.max << " " << p.min;
    return 0;
}