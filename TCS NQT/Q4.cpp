/*26 April S2 Q2
Your are given a grocery list which consists of three parameters 
Item, Quantity, Price
Your task is to find 
1.Highest Selling item
2.Total selling item upto 2 decimal places 
3.Avg selling price upto 2 decimal places

Input  3 items
apple, 1.0, 5
orange, 10.5, 5
apple 10.5, 5

Output
apple
105
35.0
*/
#include<bits/stdc++.h>
#include<string>
#include<map>
using namespace std;
class Solution{
    public:
    void grocery(string item[], double quantity[], double price[]){
        map<string, double>itemlist;
        for(int i=0;i<3;i++){
            itemlist[item[i]]+=quantity[i];
        }
        string hselling;
        double maxquantity=0;
        for(auto& it:itemlist){
            if(it.second>maxquantity){
                maxquantity=it.second;
                hselling=it.first;
            }
        }
        cout<<"Highest selling item:"<<hselling<<endl;
        double multi[3],sum=0;
        for(int i=0;i<3;i++){
            multi[i]=quantity[i]*price[i];
            sum += multi[i];
        }
        cout<<fixed<<setprecision(2);
        cout<<"Total Selling Price:"<<sum<<endl;
        cout<<"Avg selling price:";
        double avg=sum/3;
        cout<<avg;
    }
};
int main(){
    string item[3]={"apple", "orange", "apple"};
    double quantity[3]={1.0, 10.0, 10.0};
    double price[3]={5,5,5};
    Solution sl;
    sl.grocery(item, quantity, price);

}
