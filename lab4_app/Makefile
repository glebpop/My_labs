all: lab4app

lab4app: main.o testSort.o arrays/copyarray.o arrays/darray.o sorts_metod/bubbleSort.o sorts_metod/insertionSort.o sorts_metod/mergeSort.o
	gcc main.o testSort.o arrays/copyarray.o arrays/darray.o sorts_metod/bubbleSort.o sorts_metod/insertionSort.o sorts_metod/mergeSort.o -o lab4app

main.o: main.c function.h
	gcc -c main.c -o main.o

testSort.o: testSort.c function.h
	gcc -c testSort.c -o testSort.o

arrays/copyarray.o: arrays/copyarray.c function.h
	gcc -c arrays/copyarray.c -o arrays/copyarray.o

arrays/darray.o: arrays/darray.c function.h
	gcc -c arrays/darray.c -o arrays/darray.o

sorts_metod/bubbleSort.o: sorts_metod/bubbleSort.c function.h
	gcc -c sorts_metod/bubbleSort.c -o sorts_metod/bubbleSort.o

sorts_metod/insertionSort.o: sorts_metod/insertionSort.c function.h
	gcc -c sorts_metod/insertionSort.c -o sorts_metod/insertionSort.o

sorts_metod/mergeSort.o: sorts_metod/mergeSort.c function.h
	gcc -c sorts_metod/mergeSort.c -o sorts_metod/mergeSort.o

clean:
	rm -f main.o testSort.o arrays/copyarray.o arrays/darray.o sorts_metod/bubbleSort.o sorts_metod/insertionSort.o sorts_metod/mergeSort.o lab4app
