#include <iostream>

int main(){
    int rows, cols;

    std::cout << "Enter the number of rows and columns not exceeding 3:";
    std::cin >> cols;

    if (rows > 3 || cols > 3) {
        std::cout << "Dimensions exceed the limit. Existing program.\n";
        return 1;

        double array[3][3];
        std::cout << "Enter values for the array:\n";

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                std::cout << "Enter value for element [" << i << "][" << j << "]: ";
                std::cin >> array[i][j];
            }
        }

        std::cout << "Values of the array:\n";
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                std::cout << array[i][j] << " ";
            }
            std::cout << std::endl;
        }
        return 0;
    }

}