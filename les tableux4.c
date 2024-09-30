#include <stdio.h>

int main()
{
   int x, y ;
      printf("entrez le nombre d'éléments d'un tableau: ");
      scanf("%d",&x);
    int T[x]  ;
      for(int i=0 ; i<x ; i++ ){
          printf("enter les nombre:");
          scanf("%d",&y);
          T[i]=y;
      }
      for(int i=0 ; i<x ; i++ ) {
          printf("[%d]\n ", T[i] );
      }
      int max ;
           max = T[x];
      for(int i=0 ; i<x ; i++ ){
        if(max < T[i]);
           max = T[i];
      }
    printf("la somme des éléments d'un tableau d'entiers: %d" , max);
      
  return 0;  
}