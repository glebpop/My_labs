#include<stdlib.h>
#include"../function.h"
void copyArray(int *array, int *copy, int size){ //void потому что она просто копирует
        for(int i=0; i < size; i++){ // я копирую, чтобы исходный массив не трогать. все же он пройдет через 3 сортировки
                copy[i] = array[i];
        }
}
