#include <stdio.h>

int main()
{
      int x ;
      printf("entrez le nombre d'éléments d'un tableau: ");
      scanf("%d",&x);
     
      int T[x]  ;
      for(int i=0 ; i<x ; i++ ){
          printf("enter les nombre:");
          scanf("%d",&T[i]);
      }
      
      for(int i=0 ; i<x ; i++ ) {
          printf("[%d]\n", T[i] );
      }
      
      int min = T[0];
      
      for(int i=0 ; i<x ; i++ ){
        if(min > T[i])
           min = T[i];
      }
    printf("Le plus petit nombre dans cette matrice est : %d" , min);
      
  return 0;  
}