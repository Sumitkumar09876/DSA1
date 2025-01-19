/*
Program to generate Pascal's Triangle
Problem Statement: This problem has 3 variations. They are stated below:
Variation 1: Given row number r and column number c. Print the element at position (r, c) in Pascal’s triangle.
Variation 2: Given the row number n. Print the n-th row of Pascal’s triangle.
Variation 3: Given the number of rows n. Print the first n rows of Pascal’s triangle
Example 1:
Input Format:
 N = 5, r = 5, c = 3
Result:
 6 (for variation 1)
1 4 6 4 1 (for variation 2)

1 
1 1 
1 2 1 
1 3 3 1 
1 4 6 4 1    (for variation 3)

Explanation:
 There are 5 rows in the output matrix. Each row is formed using the logic of Pascal’s triangle.

*/
#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    int solv(int N,int r,int c){
        vector<vector<int>>arr;
        int cnt=1;
        int sum=0;
        for(int i=1;i<=N;i++){
            for(int j=1;j<=N;j++){
                if(i>cnt && j>cnt){
                    break;
                }else{
                    if(i==1 && j==cnt){
                        arr[i][j]=1;
                    }else{
                        sum=arr[i-1][j]+arr[i-1][j+1];
                        arr[i][j]=sum;
                    }
                }
                cnt++;
            }
        }
        for(int i=1;i<=N;i++){
            for(int j=1;j<=N;j++){
                cout<<arr[i][j]<<" ";
            }
        }
    }
};
int main(){
    Solution sl;
    sl.solv(5,5,3);
}