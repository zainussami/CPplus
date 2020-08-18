#include <iostream>
#include <vector>


int vectsum(std::vector<int> numVect){
    if (numVect.size() <= 1){
        return numVect[0];
    }
    else {
        std::vector<int> slice(numVect.begin() + 1, numVect.begin()+numVect.size());
        return numVect[0] + vectsum(slice); //function makes a recursive call to itself.
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    int arr2[] = {1, 3, 5, 7, 9};
    std::vector<int> numVect(arr2, arr2 + (sizeof(arr2) / sizeof(arr2[0])));  //Initializes vector with same items as arr2.
    std::cout << vectsum(numVect) << std::endl;
    return 0;
}