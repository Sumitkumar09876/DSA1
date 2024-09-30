/*Question 4 :Picking Tickets
There are consecutive lighthouses present in the x axis of a plane.You are given n, which represents the the number of light position and x coordinate array which represent the position of the lighthouses.You have to find maximum lighthouses which have absolute difference less than or equal to 1 between adjacent numbers.

CONSTRAINTS
1<=n<105
1<=tickets[i]<=109
SAMPLE CASE 0:

SAMPLE INPUT 0:
4  → tickets[] size=4
4   → tickets[] =[4,13,2,3]

13
 2
3

SAMPLE OUTPUT 0:
3

EXPLANATION
There are 2 subsequences of tickets that contain consecutive integers when sorted. {2,3,4} and {13} . These sequences has m values as 3 and 1 respectively . return maximum value of m which is 3.
*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int solv(vector<int>&arr){
        int size=arr.size();
        for(int i=0;i<size-1;i++){
            for(int j=0;j<size-1-i;j++){
                if(arr[j]>arr[j+1]){
                    int hold=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=hold;
                }
            }
        }
        int count=0;
        for(int i=0;i<size;i++){
            if(arr[i]-arr[i+1]<=1){
                count++;
            }
        }
        return count;
    }
};
int main(){
    vector<int>arr={4,13,2,3};
    Solution sl;
    cout<<sl.solv(arr);
}