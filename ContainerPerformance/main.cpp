#include <iostream>
#include <vector>
#include <unordered_map>
#include <ctime>

void VectorPush(int num){
    std::vector<int> vect;
    for (int i = 0; i < num; i++){
        vect.push_back(i);
    }
}
void VectorPushReserve(int num){
    std::vector<int> vect2;
    vect2.reserve(num);
    for (int i = 0; i < num; i++){
        vect2.push_back(i);
    }
}




int main() {
    std::cout << "Hello, World!" << std::endl;
    int numRuns = 10000;
    clock_t begin_t1 = clock();
    for (int i = 0; i < numRuns; i++){
        VectorPushReserve(numRuns);
    }
    clock_t end_t1 = clock();
    double elapsed_secs = double(end_t1 - begin_t1) /CLOCKS_PER_SEC;
    std::cout << std::fixed << std::endl;
    std::cout << "push_back " << elapsed_secs << " milliseconds" << std::endl;

    for(int a = 10000; a < 1000001; a = a + 20000) {
        // vector Part
        clock_t begin = clock();
        std::vector<int> avector;
        for( int i = 0; i < a; i++){
            avector.push_back(i);
        }
        clock_t end = clock();
        double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;

        // Hash Table Part
        clock_t  begin_ht = clock();
        std::unordered_map<int, int> y;
        for( int j = 0; j < a; j++ ){
            y[j] = NULL;
        }
        clock_t end_ht = clock();
        double elapsed_secs_ht = double(end_ht - begin_ht) / CLOCKS_PER_SEC;

        // Printing final output
        std::cout << a << "\t" << elapsed_secs << "\t" << elapsed_secs_ht << std::endl;
    }
    return 0;
}