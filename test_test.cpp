#include<iostream>
#include<vector>
using namespace std;

class remove {
public:
    void zero(vector<int>& arr1) {
        vector<int> temp1, temp2;
        int size = arr1.size();

        for(int i = 0; i < size; i++) {
            if(arr1[i] == 0) {
                temp1.push_back(arr1[i]);
            } else {
                temp2.push_back(arr1[i]);
            }
        }

        arr1.clear();

        for(int i = 0; i < temp1.size(); i++) {
            arr1.push_back(temp1[i]);
        }
        for(int i = 0; i < temp2.size(); i++) {
            arr1.push_back(temp2[i]);
        }

        for(int i = 0; i < arr1.size(); i++) {
            cout << " " << arr1[i];
        }
    }
};

int main() {
    vector<int> arr1 = {2, 3, 0, 3, 5, 0, 9, 0};
    remove re;
    re.zero(arr1);
}