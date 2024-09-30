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
      int i , s ;
      s = 0;
      for(int i=0 ; i<x ; i++)
                   s = s + T[i];
      
    printf("La somme de ces nombres est: %d" , s );
      
  return 0;  
}