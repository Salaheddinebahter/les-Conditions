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
       
    int y , n , i=0 ;
      for (i=0 ; i<x ; i++){
      for (n=0 ; n<x ; n++){
          if(T[i] < T[n]){
              y = T[i];
              T[i] = T[n];
              T[n] = y;
           }
       }
    }  
          printf("Lordre croissant de ces nombres est :\n");
          
      for(int i = 0 ; i<x ; i++ ){
          printf("%d\n", T[i]);
       }
  return 0;  
}