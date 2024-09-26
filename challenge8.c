#include <stdio.h>

 int main()
{
   float n;
     printf("Entrez la Notes moyennes des élèves:");
   scanf("%f",&n);
 if (10>n){
    printf("il est recalé.");

 }else if (10 <= n && n <= 12){
    printf("passable.");

 }else if (12 < n && n <= 14){
    printf("assez bien.");

 }else if (14 < n && n <= 16){
    printf("bien.");
    
 }else if (16 < n && n <=20){ 
    printf("très bien.");
    
 }else {
    printf("erreur");
 }
    return 0;
     
 }