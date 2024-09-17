/*
8 May 2024 S2 Q2
Task I- print the collatz sequence up to ending with 1 the sequence should be in the following way
-> if the number is even:
f(n)=n/2
-> if the number is odd:
f(n)=3*n+1
This sequence should end until the last element cf sequence is 1
Task-2
For the given integer from 1,n it should calculate the sequence of each k value i.e., I<=k<=n
Calculate the maximum length of sequence list of each k value and return the maximum length of the sequence list of the k value and the k value itself
Task-3
For the given integer from 1.n it should calculate the sequence of each k value le, l<=k<=n
Calculate the maximum value of the each sequence within the sequence list of each k value and return the maximum value of the sequence list of the k value and those k value itself
Input: 5
Output:
[5,16,8,4,2,1]
8,3
16,3
Input: O
Output: Error!
Input: xyza
output: Error!
Input:-13
Output: Error!
Input: 5.5
Output: Error!
*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int> solv1(int n){
        vector<int>arr;
        arr.push_back(n);
        while(n!=1){
            int i=1;
            if(n%2==0){
                n=n/2;
            } else if(n%2!=0){
                n=3*n+1;
            }
            arr.push_back(n);
        }
        return arr;
    }
    pair<int,int>solv2(int n){
        int max=0;
        int maxK=0;
        for(int i=1;i<=n;i++){
        vector<int>seq=solv1(i);
        if(seq.size() > max){
            max=seq.size();
            maxK=i;
        }
        }
        return {max,maxK};
        
    }
    pair<int,int>solv3(int n){
        int maxk=0;
        int comp=0;
        for(int i=1;i<=n;i++){
            vector<int>seq=solv1(i);
            int max=seq[0];
            for(int j=1;j<seq.size();j++){
                if(seq[j]>max){
                    max=seq[j];
                }
            }

            if(max>comp){
                comp=max;
                maxk=i;
            }
        }
        return {comp,maxk};
    }
};
int main(){
    string str;
    cout<<"Enter n:";
    cin>>str;
    Solution sl;
    if(str.empty() || !all_of(str.begin(),str.end(),::isdigit) || stoi(str)<=0){
        cout<<"Error!"<<endl;
    }else{
        int n=stoi(str);
        vector<int>result1=sl.solv1(n);
        for(const auto& it:result1){
            cout<<it<<" ";
        }
        cout<<endl;
        pair<int,int>result2=sl.solv2(n);
        cout<< result2.first << "," << result2.second << endl;

        pair<int,int>result3=sl.solv3(n);
        cout<<result3.first<<","<<result3.second<<endl;
    }
    
}
