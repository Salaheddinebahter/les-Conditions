#include <stdio.h>
#include <math.h>
int main(){
float a , b , c , D , x1 , x2 ;
printf("enter a:");
scanf("%f",&a);
printf("entre b:");
scanf("%f",&b);
printf("entre c:");
scanf("%f",&c);
D = pow(b,2)-4*a*c;
if (D>0){
   x1=(-b+(sqrt(D)))/(2*a);
    printf("x1=%.2f\n",x1);
   x2=(-b-(sqrt(D)))/(2*a);
    printf("x2=%.2f\n",x2);
} else if (D=0) {
    x1=(-b+(sqrt(D)))/(2*a);
    printf("x=%f",x1);
} else {
    printf("non");
}
return 0;
}