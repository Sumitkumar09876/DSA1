/*Missing And Repeating
Difficulty: MediumAccuracy: 24.83%Submissions: 463K+Points: 4
Given an unsorted array arr of size n of positive integers. One number 'A' from set {1, 2,....,N} is missing and one number 'B' occurs twice in array. Find these two numbers.
Your task is to complete the function findTwoElement() which takes the array of integers arr and n as parameters and returns an array of integers of size 2 denoting the answer (The first index contains B and second index contains A)

Examples

Input: n = 2 arr[] = {2, 2}
Output: 2 1
Explanation: Repeating number is 2 and smallest positive missing number is 1.
Input: n = 3 arr[] = {1, 3, 3} 
Output: 3 2
Explanation: Repeating number is 3 and smallest positive missing number is 2.
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)

Constraints:
2 ≤ n ≤ 105
1 ≤ arr[i] ≤ n
*/
#include<iostream>
#include<vector>
using namespace std;
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        vector<int>ans(2);
        int i;
        for(i=0;i<n;i++){
            if(arr[abs(arr[i])-1]>0){
                arr[abs(arr[i])-1]=-arr[abs(arr[i])-1];
            }else{
                ans[0]=abs(arr[i]);
            }
        }
        for(i=0;i<n;i++){
            if(arr[i]>0){
                ans[1]=i+1;
            }
        }
        return ans;
    }
};
int main() {
    vector<int> arr = {1, 3, 3};
    int n = arr.size() - 1;
    Solution sol;
    vector<int> result = sol.findTwoElement(arr, n);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}