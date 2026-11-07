#include<stdlib.h>
#include<time.h>
#include"function.h"


//замер времени
double testSort(void (*sortFunc)(int*, int), int *original, int size, int isMerge) {  //указатель на сортировку(массив, размер), массив, размер, флаг на слияние

    int *testArr = (int*)malloc(size * sizeof(int));//создание копии массива чтобы исходный не загадить
    copyArray(original, testArr, size);//подробнее в  arrays/copyArray


    clock_t start = clock();//засекаем время


    if (isMerge) { //у слияния (массив, начало, конец), у пузырька и вставки только (массив, размер)
        mergeSort(testArr, 0, size - 1);//void (*sortFunc)(int*, int) импортирует сортировку, если флаг на слияние 1 то разрешается 3 аргумента(массив, начало конец) для вызова функции
    } else {//функции вызываются здесь для замера времени работы
        sortFunc(testArr, size);
    }


    clock_t end = clock();//сколько прошло времение после?


    free(testArr);//удаляем мусор, иначе программа ляжет


    return (double)(end - start) / CLOCKS_PER_SEC; //вычитаем начало-конец и выводим время в секундах, CLOCKS_PER_SEC - дает количество тиков на 1 секунду
} //формула: дофига тиков/тиков на 1 секунду = сколько прошло в секундах
