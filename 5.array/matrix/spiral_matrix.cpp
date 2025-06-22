/* 
How to visulise the problem 
1st: - create a empty matrix then write index in spiral from


*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralMatrix(const vector<vector<int>>& matrix) {
    vector<int> finalArray;

    int startRow = 0;
    int endRow = matrix.size() - 1;
    int startCol = 0;
    int endCol = matrix[0].size() - 1;

    while (startRow <= endRow && startCol <= endCol) {
        // Traverse from left to right
        for (int j = startCol; j <= endCol; j++) {
            finalArray.push_back(matrix[startRow][j]);
        }
        startRow++;

        // Traverse from top to bottom
        for (int i = startRow; i <= endRow; i++) {
            finalArray.push_back(matrix[i][endCol]);
        }
        endCol--;

        // Traverse from right to left
        if (startRow <= endRow) {
            for (int j = endCol; j >= startCol; j--) {
                finalArray.push_back(matrix[endRow][j]);
            }
            endRow--;
        }

        // Traverse from bottom to top
        if (startCol <= endCol) {
            for (int i = endRow; i >= startRow; i--) {
                finalArray.push_back(matrix[i][startCol]);
            }
            startCol++;
        }
    }

    return finalArray;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<int> result = spiralMatrix(matrix);

    cout << "[";
    for (size_t i = 0; i < result.size(); ++i) {
        cout << result[i];
        if (i < result.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}
 
