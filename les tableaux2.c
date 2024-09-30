#include <stdio.h>

int main()
{
   int x, y ;
      printf("entrez le nombre d'éléments d'un tableau: ");
      scanf("%d",&x);
    int tableau[x];
      for (int i=0 ; i<x ; i++ ){
          printf("enter les nombre:");
          scanf("%d",&y);
          tableau[i]=y;
      }
      for (int i=0 ; i<x ; i++ ) {
          printf("[%d]" ,tableau[i] );
      }
  return 0;  
}