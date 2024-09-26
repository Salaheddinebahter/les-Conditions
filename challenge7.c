#include <stdio.h>

 int main()
{
   char al;
     printf("Entrez la lettre:");
   scanf("%c",&al);
 if (65<=al & al<=90){
    printf("un alphabet majuscule",&al,(int)al);
 }else if (97<=al && al<=122){
    printf("un alphabet minuscule",&al,(int)al);
 }else {
    printf("non");
 }
    return 0;
}