#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    unsigned int a ;
    int b ;
    
    printf("input a number : ");
    scanf("%ui" , &a);
    
    for (b=0; a!= 0; a >>= 1)
    {
        if(a & 1) {
             b++;
             }
    }
    
    printf("The result is : %i \n", b);
      
  system("PAUSE");	
  return 0;
}
