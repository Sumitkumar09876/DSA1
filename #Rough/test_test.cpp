#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int store;
       for(int i=0;i<sizeof(nums1);i++){
           for(int j=0;j<sizeof(nums2);j++){
               if(nums1[i]==nums2[j]){
                   store=nums1[i];
                   return store;
               }
           }
       } 
       return -1;
    }
};

int main(){
    vector<int>nums1={1,2,3};
    vector<int>nums2={2,4};
    Solution so;
    cout<<so.getCommon(nums1,nums2);
}