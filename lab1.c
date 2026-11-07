#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float min(float a, float b, float c){
if ((a<b)&&(a<c)){
    return a;
   }
if ((b<a)&&b<c){
    return b;
   }
if ((c<a)&&c<b){
    return c;
   }
}
float main(){
float x;
float a;
float hx = 1.3;
float ha = 1.2;
float z;
for(x = 1.0; x<=3.0; x = hx + x){
   for(a = 2.0; a<=4.0; a = ha + a){
      z=min(atan(pow(exp(x), x)/100.0), ((a*pow(x, (1.0/2.0) + sin(x-pow(a, 2.0))))/abs(x)), log(abs(pow(x-a, 1.0/3.0))));
      printf("%f\n", z);
       
      }
   }
return 0;
}

