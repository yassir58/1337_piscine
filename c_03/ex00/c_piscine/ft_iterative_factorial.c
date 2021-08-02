#include<stdio.h>



int iterative_factorial(int b)
{
  int i = b;
  while ( i != 1 )
  {
   b *= --i;
   
  }
  return b;
  
}






int main() {
  printf("%d",iterative_factorial(7));
  return 0;
}