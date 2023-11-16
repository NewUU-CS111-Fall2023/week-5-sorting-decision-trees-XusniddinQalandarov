#include <iostream>
#include <vector>
#include <algorithm>

// Bubble Sort function
void bubbleSort(std::vector<std::string>& books) {
    int n = books.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (books[j] > books[j + 1]) {
                std::swap(books[j], books[j + 1]);
            }
        }
    }
}

int main() {
    std::vector<std::string> books = {
        "Catcher in the Rye",
        "Pride and Prejudice",
        "To Kill a Mockingbird",
        "The Great Gatsby",
        "Moby Dick"
    };

    // Sort the books using Bubble Sort
    bubbleSort(books);

    // Display the sorted list of book titles
    for (const auto& book : books) {
        std::cout << book << std::endl;
    }

    return 0;
}