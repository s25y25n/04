#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a ;
    
    printf("input the year : ");
    scanf("%d", &a);
    
    //1. 4로 나눴을때 나머지 0
    //2. 100으로 나눴을때 나머지가 0이 아님
    //3. 400으로 나넜을때 나머지 0 
    
    if( (a % 4 == 0 && a %100 != 0) || a % 400 == 0 ) 
    {
         printf("is the year %d the leap year? : Yes\n", a);
    }
    else
    {
           printf("is the year %d the leap year? : No\n", a);
    }
         
      
  system("PAUSE");	
  return 0;
}
