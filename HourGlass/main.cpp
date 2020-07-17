#include <iostream>
#include <vector>
#include <fstream>


// Complete the hourglassSum function below.
int hourglassSum(std::vector<std::vector<int>> arr) {
  if (arr.size()<3 || arr[0].size()<3)
        return -1;

    // Here loop runs (R-2)*(C-2) times considering
    // different top left cells of hour glasses.
    int max_sum = INT_MIN;
    for (int i=0; i<arr.size()-2; i++)
    {
        for (int j=0; j<arr[0].size()-2; j++)
        {
            // Considering mat[i][j] as top left cell of
            // hour glass.
            int sum = (arr[i][j]+arr[i][j+1]+arr[i][j+2])+
                      (arr[i+1][j+1])+
                  (arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2]);

            // If previous sum is less then current sum then
            // update new sum in max_sum
            max_sum = std::max(max_sum, sum);
        }
    }
    return max_sum;

}

int main()
{
    std::ofstream fout(getenv("OUTPUT_PATH"));

    std::vector<std::vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            std::cin >> arr[i][j];
        }

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    std::cout << result << "\n";

    fout.close();

    return 0;
}
