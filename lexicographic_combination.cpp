#include <iostream>
#include <vector>
#include <algorithm>

// Function to generate the next combination in lexicographic order
bool nextCombination(std::vector<int>& comb, int n, int r) {
    int i = r - 1;
    
    // Find the rightmost element that can be incremented
    while (i >= 0 && comb[i] == n - r + i) {
        --i;
    }

    // If no such element is found, the current combination is the last one
    if (i < 0) {
        return false;
    }

    // Increment the found element
    ++comb[i];

    // Adjust the following elements
    for (int j = i + 1; j < r; ++j) {
        comb[j] = comb[j - 1] + 1;
    }

    return true;
}

int main() {
    int n, r;
    
    // Input the values of n and r
    std::cout << "Enter the value of n (total number of elements): ";
    std::cin >> n;
    std::cout << "Enter the value of r (size of each combination): ";
    std::cin >> r;

    // Initialize the combination with the first combination
    std::vector<int> comb(r);
    for (int i = 0; i < r; ++i) {
        comb[i] = i;
    }

    // Print all combinations
    do {
        // Print the current combination
        for (int i = 0; i < r; ++i) {
            std::cout << comb[i] << " ";
        }
        std::cout << std::endl;
        
        // Generate the next combination
    } while (nextCombination(comb, n, r));

    return 0;
}