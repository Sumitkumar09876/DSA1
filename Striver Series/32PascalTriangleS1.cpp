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
using namespace std;
class Solution{
    public:
    int solv(int N,int r,int c){
        int j=0,result=0;
        int sum2=1;
        int sum1=1;
        r=r-1;
        c=c-1;
        for(int i=0;i<c;i++){
            sum2=sum2*(c-i);
            sum1=sum1*(r-i);
        }
        cout<<sum1<<endl;
        cout<<sum2<<endl;
        result=sum1/sum2;
        return result;
    }
};
int main(){
    Solution sl;
    cout<<sl.solv(5,4,2);
}