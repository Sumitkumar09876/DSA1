/*Sort Elements of an Array by Frequency
Given an array of integers, having some duplicate elements, sort the array by frequency
Ex 1:
Input: N=array[]={1,2,3,2,4,3,1,2}
Output: 2 2 2 1 1 3 3 4
*/
#include<iostream>
#include<map>
#include<vector>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;
class Solution{
    public:
    vector<int>solv(vector<int>&nums){
        map<int,int>hold;
        for(int i=0;i<nums.size();i++){
            hold[nums[i]]++;
        }
        
        vector<pair<int,int>>compare;
        for(auto it:hold){
            compare.push_back({it.first,it.second});
        } 
         sort(compare.begin(),compare.end(),[](const pair<int,int>&a,const pair<int,int>&b){
            return a.second>b.second||(a.second==b.second && a.first<b.first);

         });
         vector<int>final;
         for(auto it:compare){
            for(int i=0;i<it.second;i++){
                final.push_back(it.first);
            }
         }
        return final;
    }
};
int main(){
    string str="{1,2,3,2,4,3,1,2}";
    vector<int>nums;
    string trimedin=str.substr(1,str.length()-2);
    stringstream ss(trimedin);
    string item;
    while(getline(ss,item,',')){
        nums.push_back(stoi(item));
    } 
    Solution sl;
    vector<int>result=sl.solv(nums);
    for(int i=0;i<result.size();i++){
        cout<<result[i];
    }
}
