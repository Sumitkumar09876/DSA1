#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int count=0;
        int store;
        vector<int>check;
        vector<int>temp;
        for(int i=0;i<sizeof(nums);i++){
            for(int j=i;i<sizeof(nums);j++){
                if(nums[i]==nums[j]){
                    count++;
                    temp[i]=count;
                }
                check[i]=temp[i];
            }
        }
        for(int i=0;i<sizeof(nums);i++){
            if(check[0]<check[i]){
                store=check[i];
            }
        }
        return store;
    }
};
int main(){
    vector<int>nums={0,1,3};
    int size=nums.size();
    cout<<size;
}