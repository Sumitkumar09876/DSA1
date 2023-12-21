#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to calculate the maximum value of items that can be added to the knapsack
int knapSack(int W, vector<int> wt, vector<int> val, int n) {
    vector<pair<double, int>> ratios;
    for (int i = 0; i < n; i++) {
        ratios.push_back({static_cast<double>(val[i]) / wt[i], i});
    }

    sort(ratios.rbegin(), ratios.rend());

    int totalValue = 0;
    for (int i = 0; i < n; i++) {
        int currentWeight = wt[ratios[i].second];
        int currentValue = val[ratios[i].second];

        if (W >= currentWeight) {
            totalValue += currentValue;
            W -= currentWeight;
        } else {
            totalValue += (W / currentWeight) * currentValue;
            break;
        }
    }

    return totalValue;
}

int main() {
    int n, W;
    cout << "Enter the number of items: ";
    cin >> n;
    cout << "Enter the maximum weight: ";
    cin >> W;

    vector<int> wt(n), val(n);
    cout << "Enter the weight and value of each item: ";
    for (int i = 0; i < n; i++) {
        cin >> wt[i] >> val[i];
    }

    cout << "The maximum value of items that can be added to the knapsack is: " << knapSack(W, wt, val, n) << endl;

    return 0;
}