#include <iostream>
#include <vector>


std::vector<int> selectionSort(std::vector<int> avector) {
    for (int fillslot = (avector.size() - 1); fillslot >= 0; fillslot--) {
        int positionOfMax = 0;
        for (int location = 1; location < fillslot + 1; location++) {
            if (avector[location] > avector[positionOfMax]) {
                positionOfMax = location;
            }
        }

        int temp = avector[fillslot];
        avector[fillslot] = avector[positionOfMax];
        avector[positionOfMax] = temp;
    }
    return avector;
}

void printl(std::vector<int> avector) {
    for (unsigned int i=0; i<avector.size(); i++) {
        std::cout << avector[i] << " ";
    }
    std::cout << std::endl;
}

//function sorts using mergesort.
std::vector<int> mergeSort(std::vector<int> avector) {
    std::cout<<"Splitting ";
    printl(avector);
    if (avector.size()>1) {
        int mid = avector.size()/2;
        //C++ Equivalent to using Python Slices
        std::vector<int> lefthalf(avector.begin(),avector.begin()+mid);
        std::vector<int> righthalf(avector.begin()+mid,avector.begin()+avector.size());

        lefthalf = mergeSort(lefthalf);
        righthalf = mergeSort(righthalf);

        unsigned i = 0;
        unsigned j = 0;
        unsigned k = 0;
        while (i < lefthalf.size() && j < righthalf.size()) {
            if (lefthalf[i] < righthalf[j]) {
                avector[k]=lefthalf[i];
                i++;
            } else {
                avector[k] = righthalf[j];
                j++;
            }
            k++;
        }

        while (i<lefthalf.size()) {
            avector[k] = lefthalf[i];
            i++;
            k++;
        }

        while (j<righthalf.size()) {
            avector[k]=righthalf[j];
            j++;
            k++;
        }

    }
    std::cout<<"Merging ";
    printl(avector);

    return avector;
}


std::vector<int> insertionSort(std::vector<int> avector) {
    for (unsigned int index=1; index<avector.size(); index++) {

        int currentvalue = avector[index];
        int position = index;

        while (position>0 && avector[position-1]>currentvalue) {
            avector[position] = avector[position-1];
            position--;
        }

        avector[position] = currentvalue;
    }

    return avector;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    static const int arr[] = {54, 26, 93, 17, 77, 31, 44, 55, 20};
    std::vector<int> avector (arr, arr + sizeof(arr) / sizeof(arr[0]) );

    // Call to the selectionSort function
    std::vector<int> updatedAvector = selectionSort(avector);

    updatedAvector = insertionSort(avector);
    for (auto i : updatedAvector ) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}