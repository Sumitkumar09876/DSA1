#include <iostream>
#include <vector>
using namespace std;

class merger {
public:
    void mer(vector<int> &arr1, vector<int> &arr2) {
        int size1 = arr1.size();
        int size2 = arr2.size();
        int total = size1 + size2;
        vector<int> revarr;

        // Merge arr1 and arr2 into revarr
        for (int i = 0; i < size1; i++) {
            revarr.push_back(arr1[i]);
        }
        for (int i = 0; i < size2; i++) {
            revarr.push_back(arr2[i]);
        }

        // Sort revarr using bubble sort
        for (int i = 0; i < total; i++) {
            for (int j = i + 1; j < total; j++) {
                if (revarr[i] > revarr[j]) {
                    swap(revarr[i], revarr[j]);
                }
            }
        }

        // Print the sorted array
        for (int i = 0; i < total; i++) {
            cout << revarr[i] << " ";
        }
    }
};

int main() {
    vector<int> arr1 = {1, 4, 5, 8, 11};
    vector<int> arr2 = {2, 3, 6, 12};
    merger me;
    me.mer(arr1, arr2);
}