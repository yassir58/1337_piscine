#include<stdio.h>



int ft_recursive_factorial(int b)
{
  
  
  if (b == 0)
    return (1);
  else
    return   b * ft_recursive_factorial(b-1);
}






int main() {
  printf("%d",ft_recursive_factorial(5));
  return 0;
}