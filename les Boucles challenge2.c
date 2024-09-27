#include <stdio.h>

int main()
{
   int a , x = 1 , n=1 ;
      printf("entrez le nomebr : ");
      scanf("%d",&a);
    while ( n<=a ){
        
        x*=n;
        n++;
    }
    printf("r:%d" ,x );
  return 0;  
}