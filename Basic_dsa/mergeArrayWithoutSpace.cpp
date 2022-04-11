#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0;
        while(i<m && j<n){
            if(nums2[j]<=nums1[i]){
                int m=nums1.size()-1;
                while(m!=i){
                    nums1[m]=nums1[m-1];
                    m--;
                }
                nums1[i]=nums2[j];
                i++;
                j++;
            }
            if(nums1[i]<nums2[j] && nums1[i]!=0){
                i++;
            }
            if(nums1[i]<nums2[j] && nums1[i]==0)
            {
                nums1[i]=nums2[j];
                i++;
            }
        }
    }
int main()
{
    vector<int> nums1={1,2,3,0,0,0};
    vector<int> nums2={2,5,6};
    merge(nums1,nums1.size(),nums2,nums2.size());
    for(int i=0;i<nums1.size();i++){
        cout<<nums1[i]<<" ";
    }
 return 0;
}