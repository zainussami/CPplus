#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
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
int test1(int N, int K){
    int result =0;
    while (N > 3 && K > 0){
        if (N%2){  //If N is Odd
            N -=1;
        }
        else{
            N /=2;
            K -=1;
        }
        result += 1;
    }
    return result + N - 1;
}

int test1r(int N, int K){
    if (K<1 || N < 4 ) return N-1;

    if (N%2) return 1+test1r(N-1,K);
    else return 1+test1r(N/2,K-1);
}
void checkNeighbor(const std::vector<std::vector<int> > &A, std::vector<std::vector<int> > &B, int i,int j, int N, int M)
{
    if(B[i][j] == -1) return;
    B[i][j] = -1;
    if(i+1 < N)
        if(A[i+1][j] == A[i][j]) checkNeighbor(A, B, i+1, j, N, M);
    if(i-1 >= 0)
        if(A[i-1][j] == A[i][j]) checkNeighbor(A, B, i-1, j, N, M);
    if(j+1 < M)
        if(A[i][j+1] == A[i][j]) checkNeighbor(A, B, i, j+1, N, M);
    if(j-1 >= 0)
        if(A[i][j-1] == A[i][j]) checkNeighbor(A, B, i, j-1, N, M);
}

int countries_count(const std::vector< std::vector<int> > &A) {
    if (A.empty()) return 0;
    int sum = 0;
    int N = A.size();
    int M = A[0].size(); // N*M
    if (N ==0 || M==0) return 0;
    std::vector<std::vector<int> > B(A);
    for(int i=0; i<N; i++)
        for(int j = 0; j<M; j++) {
            if (B[i][j] >= 0) {
                std::cout << i<< j << std::endl;
                checkNeighbor(A, B, i, j, N, M);
                sum ++;
            }
        }
    return sum;
}

int main() {
    std::vector<int> test {3,2,3,5,1,4,6,0};
    std::string A = "Test1";
    std::string B = "TtZ";
    std::vector<int>  C(test);
    std::vector<std::vector<int> > vector{{5, 4, 4 },
                                          {4, 3, 4 },
                                          {3, 2, 4 },
                                          {2, 2, 2 },
                                          {3, 3, 4 },
                                          {1, 4, 4 },
                                          {4, 1, 1 } };

    std::cout << countries_count(vector) << std::endl;

    std::cout << C.size() << std::endl;

    std::cout << test1(10,10) << std::endl;
    std::cout << test1r(10,10) << std::endl;

    int val;
    for (int i=0; i < B.length() ;i++){
        size_t found = A.find(B[i]);
        if (found != std::string::npos)
            std::cout << "First occurrence is " << found << std::endl;
        else std::cout <<"Not Found" << std::endl;
    }




    return 0;
}