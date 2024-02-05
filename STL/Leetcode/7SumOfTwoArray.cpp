#include<iostream>
#include<vector>
using namespace std;
class sum{
    public:
    vector<int>reverse(vector<int>ans){
        int s=0;
        int e=ans.size()-1; 
        while(s<e){ 
            swap(ans[s++],ans[e--]); 
        }
        return ans;
    }
    vector<int> add(vector<int>&arr1,vector<int>&arr2){
        int i=arr1.size()-1;
        int j=arr2.size()-1;
        int carry=0;
        vector<int>ans;
        while(i>=0 && j>=0){
            int val1=arr1[i];
            int val2=arr2[j];
            int sum=val1+val2+carry;
            carry=sum/10;
            sum=sum%10;
            ans.push_back(sum);
            i--;
            j--;
        }
         while(i>=0){
            int sum=arr1[i]+carry;
            carry=sum/10;
            sum=sum%10;
            ans.push_back(sum);
            i--;

        }
         while(j>=0){
            int sum=arr2[j]+carry;
            carry=sum/10;
            sum=sum%10;
            ans.push_back(sum);
            j--;

        }
        while(carry !=0){
            int sum=carry;
            carry=sum/10;
            sum=sum%10;
            ans.push_back(sum);

        }
        return reverse(ans);
        
    }
};
int main(){
    vector<int>arr1={1,2,3};
    vector<int>arr2={9,9};
    sum su;
    vector<int> result = su.add(arr1,arr2);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
}