#include<stdio.h>

//Проверки на простое число

int prov(int i){

	if (i < 1){
		printf("Число не является простым! Пожалуйста, введите простое число.\n");
		return 0;
		}
	
	for(int d = 2; d < i; d = d + 1){
		if(i % d == 0){
			return 0;
			}
		}
return 1;
}

int prc(int fl, int n, int i){

	//Чтобы количество шагов не привысило переданное число
	
	if (i > n){   
		return 0;
		}
	
	//Проверки на простое число
	
	if(prov(i) == 1){
			fl = fl * i;
			}
	
	//Для вывода последовательности умножения
	
	printf("%i! = 1 ", i);

	for(int ch = 1; ch <= i; ch = ch + 1){
					if((prov(ch) == 1) && (ch != 1)){
					printf("* %i ", ch);
               				 }

	}
	
	printf("= %i\n", fl);
	
	prc(fl, n, i + 1);
	
	return 1;
}
int main(){
	
	printf("Введите N для построения простофакториалов.\n");
	
	printf("N: ");
	
	int n;
	
	scanf("%i", &n);
	
	int i = 1;
	
	int fl = 1;
	
	prc(fl, n, i);
return 1;
}
