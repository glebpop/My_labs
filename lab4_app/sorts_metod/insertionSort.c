#include<stdlib.h>
#include"../function.h"

void insertionSort(int *array, int size){  //двигаем элемент вправо если он больше соседних, влево если он меньше соседних
    for (int i = 1; i < size; i++){
        int key = array[i]; //элемент который двигаем
        int j = i - 1; // а что слева стоит?
        while (j >= 0 && array[j] > key) { //пока слева элементы больше рассматриваемого
            array[j + 1] = array[j]; //j+1=key
            j--;
        }
        array[j + 1] = key; //вставка на свободное место
    }
}
