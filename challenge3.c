#include <stdio.h>

   int main(){
  int x , y  ;
  printf("entrer le nomber x: ");
  scanf("%d",&x);
  printf("entrer le nomber  y: ");
  scanf("%d",&y);
   if (x==y){
    printf("Le résultat =  %d",(x+y)*3);
   } else {
       printf("Le résultat %d",(x+y));
   }
  return 0;
}