/*
14 May 2024 S2 Q1
You are tasked with writing a program to calculate the total shipping cost based on the weight of the package and the distance it needs to travel. The shipping cost is determined by the following criteria:
1.Base money:$5.00
2.Cost per Kilogram:$2.00
3.Cost per 10 kilometres:$0.5

Example1:
10(w)
100(D)
Ouput:$30.00
*/
#include<iostream>
#include<iomanip>
using namespace std;
class Solution{
    public:
    double solv(int weight,int distance){
        double total=5+(2*weight)+((distance/10)*0.5);
        return total;
    }
};
int main(){
    Solution sl;
    cout<<fixed<<setprecision(2);
    cout<<"$"<<sl.solv(10.00,100.00);
}