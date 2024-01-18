#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    // Define the array
    std::vector<int> A = {1, 2, 3, 4, 5};

    // Sort the array to get permutations in lexicographical order
    std::sort(A.begin(), A.end());

    // Counter to keep track of displayed permutations
    int permutationCount = 0;

    // Loop to generate and print permutations
    do {
        for (int num : A) {
            std::cout << num << " ";
        }
        // Check if 12 Permutations have been displayed
        if (++permutationCount % 12 == 0){
            std::cout << std::endl;
        } else {
            std::cout << "   ";
        }

    } while (std::next_permutation(A.begin(), A.end()));

    return 0;
}

