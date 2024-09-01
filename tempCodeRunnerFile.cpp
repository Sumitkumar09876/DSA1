#include <iostream>
#include <string>
#include <map>
#include <iomanip>
using namespace std;

class Solution {
public:
    void grocery(string item[], double quantity[], double price[]) {
        // Find the highest selling item
        map<string, double> itemQuantityMap;
        for (int i = 0; i < 3; i++) {
            itemQuantityMap[item[i]] += quantity[i];
        }

        string highestSellingItem;
        double maxQuantity = 0;
        for (auto& pair : itemQuantityMap) {
            if (pair.second > maxQuantity) {
                maxQuantity = pair.second;
                highestSellingItem = pair.first;
            }
        }

        cout << "Highest selling item: " << highestSellingItem << endl;

        // Calculate the total selling price
        double sum = 0;
        for (int i = 0; i < 3; i++) {
            sum += quantity[i] * price[i];
        }

        cout << fixed << setprecision(2);
        cout << "Total Selling Price: " << sum << endl;

        // Calculate the average selling price
        double avg = sum / 3;
        cout << "Avg selling price: " << avg << endl;
    }
};

int main() {
    string item[3] = {"apple", "orange", "apple"};
    double quantity[3] = {1.0, 10.5, 10.5};
    double price[3] = {5, 5, 5};
    Solution sl;
    sl.grocery(item, quantity, price);

    return 0;
}