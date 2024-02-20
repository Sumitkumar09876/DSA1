#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5};

    for(auto i : arr) {
        std::cout << i << " ";
    }

    return 0;
}