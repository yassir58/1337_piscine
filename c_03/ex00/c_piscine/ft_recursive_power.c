#include<stdio.h>



int ft_recursive_power(int b,int pow)
{
  int i=pow;
  int last = b;
  
  if (i == 0)
    return (1);
  else
    return   (last * ft_recursive_power(b,--i));
}






int main() {
  printf("%d",ft_recursive_power(8,3));
  return 0;
}