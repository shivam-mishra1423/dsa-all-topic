#include <iostream>
#include <vector>
#include <variant>

using namespace std;

// Define a type that can hold either int, double, or string
using MatrixElement = std::variant<int, double, std::string>;

int main() {
    // Create a 2x3 matrix where each element is of type MatrixElement
    vector<vector<MatrixElement>> matrix(2, vector<MatrixElement>(3));

    // Assign different types to different elements
    matrix[0][0] = 42;               // int
    matrix[0][1] = 3.14;             // double
    matrix[0][2] = "hello";          // string
    matrix[1][0] = 7;                // int
    matrix[1][1] = 2.718;            // double
    matrix[1][2] = "world";          // string

    // Print the matrix
    cout << "Matrix (2 rows, 3 columns):" << endl;
    for (const auto& row : matrix) {
        for (const auto& elem : row) {
            // Visit the variant to print the type of element
            visit([](const auto& value) { cout << value << " "; }, elem);
        }
        cout << endl; // Move to the next row
    }

    return 0;
}
