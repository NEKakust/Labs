#ifndef LABORATORY_15_MATRIX_H
#define LABORATORY_15_MATRIX_H

#include <stdio.h>
#include <stdbool.h>

typedef struct matrix {
    int **values; // элементы матрицы
    int nRows; // количество рядов
    int nCols; // количество столбцов
} matrix;

typedef struct position {
    int rowIndex;
    int colIndex;
} position;


int getMax(int *array, int lengthArray);

int getMin(const int array[], int lengthArray);

bool isUnique(const int array[], int lengthArray);

matrix getMemMatrix(int nRows, int nCols);

matrix *getMemArrayOfMatrices(int nMatrices, int nRows, int nCols);

void freeMemMatrix(matrix *m);

void freeMemMatrices(matrix *ms, int nMatrices);

void inputMatrix(matrix *m);

void inputMatrices(matrix *ms, int nMatrices);

int partition(int array[], int start, int end, matrix m,
              void (*predicateSwap)(matrix, int, int));

void outputMatrix(matrix m);

void outputMatrices(matrix *ms, int nMatrices);

void swapRows(matrix *m, int i1, int i2);

void swapColumns(matrix *m, int j1, int j2);

void insertionSortRowsMatrixByRowCriteria(matrix m,
                                          int (*criteria)(int *, int));

void quickSort(int array[], int start, int end, matrix m,
               void (*predicateSwap)(matrix, int, int));

int getSum(const int *a, int n);

void selectionSortColsMatrixByColCriteria(matrix m,
                                          int (*criteria)(int *, int));

bool isSquareMatrix(matrix *m);

bool areTwoMatricesEqual(matrix *m1, matrix *m2);

bool isEMatrix(matrix *m);

bool isSymmetricMatrix(matrix *m);

void transposeSquareMatrix(matrix *m);

void transposeMatrix(matrix *m);

position getMinValuePos(matrix m);

position getMaxValuePos(matrix m);

matrix createMatrixFromArray(const int *a, int nRows,
                             int nCols);

#endif //LABORATORY_15_MATRIX_H
