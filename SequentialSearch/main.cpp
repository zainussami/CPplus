#include <iostream>
#include <vector>

bool sequentialSearch(std::vector<int> avector, int item) {
    unsigned int pos = 0;
    bool found = false;

    while (pos < avector.size() && !found) {
        if (avector[pos] == item) {
            found = true;
        } else {
            pos++;
        }
    }

    return found;
}

bool binarySearch(std::vector<int> avector, int item) {
    int first = 0;
    int last = avector.size() - 1;
    bool found = false;

    while (first <= last && !found) {
        int midpoint = (first + last) / 2;
        if (avector[midpoint] == item) {
            found = true;
        } else {
            if (item < avector[midpoint]) {
                last = midpoint - 1;
            } else {
                first = midpoint + 1;
            }
        }
    }
    return found;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    int arr[] = {0, 1, 2, 8, 13, 17, 19, 32, 42};
    std::vector<int> testvector(arr,arr+(sizeof(arr)/sizeof(arr[0])));

    std::cout << sequentialSearch(testvector, 3) << std::endl;
    std::cout << sequentialSearch(testvector, 13) << std::endl;

    std::cout << binarySearch(testvector, 3) << std::endl;
    std::cout << binarySearch(testvector, 13) << std::endl;
    return 0;
}