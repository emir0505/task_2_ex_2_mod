#include "ex2_modified.h"

bool fillSpiralMatrix(int** matrix, int n) {
    if (n <= 0 || !matrix) {
        return false; // Проверка на корректность входных данных
    }

    int value = 1;
    int minCol = 0, maxCol = n - 1;
    int minRow = 0, maxRow = n - 1;

    while (value <= n * n) {
        for (int i = minRow; i <= maxRow; ++i) {
            matrix[i][minCol] = value++;
        }
        minCol++;
        for (int i = minCol; i <= maxCol; ++i) {
            matrix[maxRow][i] = value++;
        }
        maxRow--;
        for (int i = maxRow; i >= minRow; --i) {
            matrix[i][maxCol] = value++;
        }
        maxCol--;
        for (int i = maxCol; i >= minCol; --i) {
            matrix[minRow][i] = value++;
        }
        minRow++;
    }
    
    return true;
}
