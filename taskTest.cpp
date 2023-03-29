#include "logic.cpp"
#include "taskTest.h"
const int tryCount = 10;
const int maxN = 8;
const int minRandomValue = 0;
const int maxRandomValue = 50;

 void randomTest(){
    for (int i = 0; i < tryCount; i++){
        int N = rand() % (maxN) + 1;
        int** matrix = getMatrixWithRandomValue(minRandomValue, maxRandomValue, N);
        int max = getMaxValue(matrix, N);
        std::cout << "Test number is " << i << std::endl;
        std::cout << "Matrix dimension is " << N << std::endl;
        std::cout << "Max value is " << max << std::endl;
        printMatrix(matrix, N);
        printVector(findRowWithMaxValue(matrix, N));
        std::cout << "\n \n";
    }
}

void testByConsole(){
    std::cout << "Enter dimension of the matrix - ";
    int n;
    std::cin >> n;
    int **matrix = readMatrix(n);
    std::vector<int> rowWithMaxValue = findRowWithMaxValue(matrix, n);
    printVector(rowWithMaxValue);
}


