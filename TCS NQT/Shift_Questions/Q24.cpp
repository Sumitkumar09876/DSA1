/*
Top candidate need to be printed from the given input
Input format:
k=3
n=4
90 john 85 Bob 100 Alice 110 Aditya
Output:
Aditya:110
Alice:100
john:90
*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<pair<string,int>>solv(string str){
        vector<pair<string,int>>candidates;
        string name;
        int score;
        stringstream ss(str);
        while(ss>>score>>name){
            candidates.push_back({name,score});
        }
        return candidates;
    }
    void print(vector<pair<string,int>>&candidates,int k){
        sort(candidates.begin(),candidates.end(),[](pair<string,int>&a, pair<string,int>&b){
            return b.second < a.second;
        });
        for(int i=0;i<k && i<candidates.size();i++){
            cout<<candidates[i].first<<":"<<candidates[i].second<<endl;
        }
    }
};
int main(){
    string str={"90 john 85 Bob 100 Alice 110 Aditya"};
    Solution sl;
    vector<pair<string,int>>candidates=sl.solv(str);
    sl.print(candidates,3);
}