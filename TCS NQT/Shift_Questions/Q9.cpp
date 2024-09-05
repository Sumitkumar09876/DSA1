/*30 April S1 Q1
In a database there are N students the fields of the table are Name, age, grade, Gender. Your task is to return the students Name who are greater than 20 years old & Calculate the average of grades using ascii value of the female candidates

Input 3
AAA 21 A Female
BBB 22 B Male
CCC 24 C Female

Output
AAA BBB CCC
66
*/

#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void Data(string stud[3][4]){
        for(int i=0;i<3;i++){
            for(int j=0;j<4;j++){
                if(j==1){
                    int store = stoi(stud[i][j]);
                    if(store>=20){
                        cout<<stud[i][j-1]<<" ";
                    }
                }
                
            }

        }
        cout<<endl;
        int marks=0;
        int femalecount=0;
        for(int i=0;i<3;i++){
            for(int j=0;j<4;j++){
                if(stud[i][3]=="Female"){
                    char grade=stud[i][2][0];
                    int ascii=static_cast<int>(grade);
                    marks += ascii;
                    femalecount++;
                }
            }
        }
        int avg=marks/femalecount;
        cout<<avg;
    }
};
int main(){
    string Stud[3][4]={{"AAA","21","A","Female"},
                      {"BBB","22","B","Male"},
                      {"CCC","24","C","Female"}};
    Solution sl;
    sl.Data(Stud);

}