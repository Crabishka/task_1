#pragma once
#include <iostream>
#include <vector>

inline void printVector(std::vector<int> vector);

inline void printMatrix(int **matrix, int n);

inline int **readMatrix(int n);

inline int getMaxValue(int **matrix, int n);

inline std::vector<int> findRowWithMaxValue(int **matrix, int n);

inline int **getMatrixWithRandomValue(int min, int max, int n);
