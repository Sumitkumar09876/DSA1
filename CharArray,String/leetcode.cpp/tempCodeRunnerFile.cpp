#include<iostream>
#include<vector>
using namespace std;
class comp{
    public:
    int compress(vector<char>& v){
        int i=0;
        int ansindex=0;
        int size=v.size();
        while (i<size)
        {
            int j=i+1;
            while(j<size && v[i]==v[j]){
                j++;
            }
            v[ansindex++]=v[i];
            int count=j-i;
            if(count>1)
            {
                string str=to_string(count);
                for(char ch:str){
                    v[ansindex++]=ch;
                }
            }
            i=j;
            

        }
        return ansindex;

    }
};
int main(){
    vector<char>v={'a','a','b','b','c','c','c'};
    comp c;
    cout<<c.compress(v);
}
