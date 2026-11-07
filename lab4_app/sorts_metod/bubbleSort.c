#include<stdlib.h>
#include"../function.h"

void bubbleSort(int *array, int size){            //если левый больше правого меняем местами
    for (int i = 0; i < size - 1; i++){//поход по элементам
        for (int j = 0; j < size - 1 - i; j++){//индекс текущего элемента size - 1 - i тк больший элемент двигается к концу, мы вычитаем i чтобы не сломать
            if (array[j] > array[j + 1]){//сравнение текущего и следующего элемента
                int temp = array[j]; //обмен переменными
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
