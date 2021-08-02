#include<stdio.h>



int ft_iterative_power(int b,int pow)
{
  int i=pow;
  int last = b;
  
  while (i != 1)
  {
    
    b *= last ;
    i--;
  }
  return (b);
}






int main() {
  printf("%d",ft_iterative_power(8,3));
  return 0;
}