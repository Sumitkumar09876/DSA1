#include<iostream>
using namespace std;
class solution{
public:
    int squareroot(int ele){
        int start=0;
        int end=ele;
        int mid=start+(end-start)/2;
        int ans;
        while(start<=end){
            mid=start+(end-start)/2;
            long long square=long long(mid)*mid;
            if(square==ele){
                return mid;
            }
            else if (square>ele)
            {
                end=mid-1;
            }
            else if (square<ele)
            {
                ans=mid;
                start=mid+1;
            }
        }
        return ans;
    }
};

int main(){
    int ele;
    cout<<"Enter the element to find the square root:";
    cin>>ele;
    solution sol;
    cout<<"The square root of "<<ele<<" is "<<sol.squareroot(ele);
    return 0;
}