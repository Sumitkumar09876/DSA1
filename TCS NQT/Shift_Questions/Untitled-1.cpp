#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cctype>
using namespace std;

int main() {
    // Input string
    string input;
    cout << "Enter input: ";
    cin >> input;

    vector<int> nums;

    // Check if the input is a string with brackets
    if (input.front() == '[' && input.back() == ']') {
        string trimmedStr = input.substr(1, input.size() - 2); // Remove the brackets
        stringstream ss(trimmedStr);
        string item;
        while (getline(ss, item, ',')) {
            nums.push_back(stoi(item)); // Convert each substring to an integer
        }
    }
    // Check if the input is a comma-separated string of numbers
    else if (input.find(',') != string::npos) {
        stringstream ss(input);
        string item;
        while (getline(ss, item, ',')) {
            nums.push_back(stoi(item)); // Convert each substring to an integer
        }
    }
    // Check if the input is a single integer
    else {
        bool isNumber = true;
        for (char c : input) {
            if (!isdigit(c)) {
                isNumber = false;
                break;
            }
        }
        if (isNumber) {
            nums.push_back(stoi(input)); // Convert the input to an integer
        } else {
            cout << "Invalid input" << endl;
            return 1;
        }
    }

    // Sort the vector using bubble sort
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                int store = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = store;
            }
        }
    }

    // Print the sorted vector
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}