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
    int r ;
          printf("Entrez le facteur de multiplication:");
          scanf("%d", &r);
          
      for(int i = 0 ; i<x ; i++ ){
          T[i] = r*T[i];
          printf("Le ruselta : T[%d]= %d \n" , i , T[i] );
      }
  return 0;  
}