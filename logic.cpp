//
// Created by JohnyTwoJacket on 03.03.2023.
//
#include "logic.h"

void printVector(std::vector<int> vector){
    for (int number : vector) {
        std::cout << number << " ";
    }
}

void printMatrix(int **matrix, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
}

int **readMatrix(int n) {
    int **matrix = new int *[n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[n];
    }
    std::cout << "Enter matrix itself " << std::endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> matrix[i][j];
        }
    }
    return matrix;
}

int getMaxValue(int **matrix, int n) {
    int max = INT32_MIN;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] > max) max = matrix[i][j];
        }
    }
    return max;
}


std::vector<int> findRowWithMaxValue(int **matrix, int n) {
    std::vector<int> rowsWithMaxValue;
    int max = getMaxValue(matrix, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == max) {
                rowsWithMaxValue.push_back(i);
                break;
            }
        }
    }
    return rowsWithMaxValue;

}



int** getMatrixWithRandomValue(int min, int max, int n){
    int **matrix = new int *[n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[n];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = min + rand() % (max - min + 1);
        }
    }
    return matrix;
}