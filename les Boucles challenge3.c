#include <stdio.h>

int main()
{
   int a , x = 0 , n=0 ;
      printf("entrez le nomebr : ");
      scanf("%d",&a);
    while ( n<=a ){
        
        x+=n;
        n++;
    }
    printf("r:%d" ,x );
  return 0;  
}