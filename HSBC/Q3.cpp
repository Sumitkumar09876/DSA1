/*Question 3 : Find the sequence sum
Rohit loves to play with sequences so he has given you a sequence to solve. To prove to him that you are a good coder, you accept the challenge. Find the sum of the sequence. Given three integers i,j,k find  i+(i+1)+(i+2)+(i+3)…j+(j-1)+(j-2)+(j-3)……..k 

CONSTRAINTS:
-108<=i,j,k<=108
i,k<=j

SAMPLE CASE0 :
0   → i=0
5  → j=5
-1  → k=-1

SAMPLE OUTPUT 0:
24

EXPLANATION 0:
0+1+2+3+4+5+4+3+2+1+0-1 =24
*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int solv(int i, int j, int k){
        int sum=0;
            for(int a=i;a<=j;a++){
                    sum+=a;
            }
            for(int b=j-1;b>=0;b--){
                sum+=b;
            }
            sum+=k;
            return sum;
    }
};
int main(){
    Solution sl;
    cout<<sl.solv(0,5,-1);
}