#ifndef function_h
#define function_h

int* darray(int size);

void copyArray(int *array, int *copy, int size);

void bubbleSort(int *array, int size);

void insertionSort(int *array, int size);

void merge(int *array, int left, int mid, int right);

void mergeSort(int *array, int left, int right);

double testSort(void (*sortFunc)(int*, int), int *original, int size, int isMerge);

#endif
