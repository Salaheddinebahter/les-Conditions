#include <stdio.h>

int main()
{
   int x, a = 1;
      printf("entrez le nombre ");
      scanf("%d",&x);
    while(a<=10){
        printf("%d*%d = %d \n" ,x,a,x*a);
        a++;
    }
  return 0;  
}