#include <iostream>
#include <vector>

void countSwaps(std::vector<int> a) {
    int swaps = 0;
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < a.size() - 1; j++) {
            // Swap adjacent elements if they are in decreasing order
            if (a[j] > a[j + 1]) {
                std::swap(a[j], a[j + 1]);
                swaps += 1;
            }
        }

    }
    std::cout << "Array is sorted in " << swaps << " swaps."<< std::endl;
    std::cout << "First Element: " << a[0]<< std::endl;
    std::cout << "Last Element: "  << a[a.size()-1];
}

int main() {
    std::vector<int> test {3,2,3,5,1,4,6,0};
    countSwaps(test);
    return 0;
}