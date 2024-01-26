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
        int square=mid*mid;
        if(square==ele){
            return mid;
            break;
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
        mid=start+(end-start);
    }
    return ans;
}
double decimal(int ele,int tempsol,int precision){
    double factor=1;
    double ans=tempsol;
    for(int i=0;i<precision;i++){
        factor=factor/10;
        for(double j=ans;j*j<ele;j=j+factor){
            ans=j;
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
    cout<<sol.squareroot(ele)<<endl;
    int tempsol=sol.squareroot(ele);
    cout<<sol.decimal(ele,tempsol,3);

}