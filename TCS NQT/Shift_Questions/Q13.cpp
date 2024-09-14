/*
3 May S2 Q1
A Person has many shoes of different sizes and he wants to arrange them, Calculate the number of pairs of shoes.
Example 1:
8
7L 7R 7L 8L 6R 7R 8R 6R
Output:3

Ex2:
5 
7R 7L 8R 10R 10L
Output: 2
*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int solv(string shoes[],int n){
        unordered_map<string,int>leftshoe;
        unordered_map<string,int>rightshoe;
        int pair=0;
        for(int i=0;i<n;i++){
            string shoe=shoes[i];
            string size=shoe.substr(0,shoe.size()-1);
            char side=shoe.back();
            if(side== 'L'){
                leftshoe[size]++;
            }else if(side=='R'){
                rightshoe[size]++;
            }
        }
            for(auto& pairs:leftshoe){
                string size=pairs.first;
                if(rightshoe.find(size)!=rightshoe.end()){
                    pair += min(pairs.second,rightshoe[size]);
                }
            }
        
        return pair;
    }
};
int main(){
    string shoes[]={"7L", "7R", "7L", "8L", "6R", "7R", "8R", "6R"};
    Solution sl;
    cout<<sl.solv(shoes,8);
}