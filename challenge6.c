#include <stdio.h>
int main(){
    float n ;
    printf("enter nombre:");
    scanf("%f",&n);
    if(n>0){
    printf("Le nombre est positif");   
    } else if(n<0) {
    printf("Le nombre est négatif");
    } else {
    printf("Le nombre est zéro ");
    }
  return 0;  
}