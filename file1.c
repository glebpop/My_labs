#include <stdio.h>
#include <math.h>
#include <stdbool.h>


bool circle(float x, float y) {
	float R = pow(x-1, 2.0)+ pow(y, 2.0);
	if (R<=1){
		return true;
	} else {
		return false;
	}
}	
int main() {
	float x, y, hx = 0.6, hy = 0.3;
	float x0 = 0, x1 = 2;
	float y0 = 0, y10 = 1.5, y11 = 2.1;
	float max_x, answer_y;
	for (float xn = x0; xn <= x1; xn += hx){
		if (xn <= 1) {
			for (float yn = y0; yn <= y10; yn += hy){
				if (circle(xn, yn)){
					printf("point inside: x=%f; y=%f\n", xn, yn);
					max_x = xn;
					answer_y = yn;
				} else {
					printf("point outside: x = %f; y=%f\n", xn, yn);
				}
			}
		} else {
			for (float yn = y0; yn <= y11; yn += hy){
				for (float yn = y0; yn <= y10; yn += hy){
					if (circle(xn, yn)){
						printf("point inside: x=%f; y=%f\n", xn, yn);
						max_x = xn;
						answer_y = yn;
					} else {
						printf("point outside: x = %f; y=%f\n", xn, yn);
					}
				}
			}
		}
	}
	printf("max x point inside: x=%f; y=%f", max_x, answer_y);
 	return 0;
}
