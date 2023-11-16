#include <iostream>
#include <vector>

// Selection Sort function
void selectionSort(std::vector<int>& denominations) {
    int n = denominations.size();
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (denominations[j] < denominations[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            std::swap(denominations[i], denominations[minIndex]);
        }
    }
}

int main() {
    std::vector<int> denominations;

    std::cout << "Enter the denominations (one denomination per line, enter -1 to finish):" << std::endl;

    int denomination;
    while (true) {
        std::cin >> denomination;
        if (denomination == -1) {
            break;
        }
        denominations.push_back(denomination);
    }

    // Sort the denominations using Selection Sort
    selectionSort(denominations);

    // Display the sorted list of denominations
    std::cout << "Sorted denominations:" << std::endl;
    for (const auto& denomination : denominations) {
        std::cout << denomination << std::endl;
    }

    return 0;
}