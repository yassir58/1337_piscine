#include <stdio.h>





int ft_strlen(char *str)
{
  int i;
  i=0;
  while (str[i] != '\0')
  {
   i++; 
  }
  return (i);
}
int ft_strlcat(char *dst,char *src,unsigned int size)
{
  unsigned int srclen;
  unsigned int dstlen;
  unsigned int i = 0;
  unsigned int res;
  
  srclen = ft_strlen(src);
  dstlen = ft_strlen(dst);
  
  if ( size > dstlen )
      res = dstlen + srclen;
  else
      res = srclen + size;
  while ( src[i] != '\0' && (dstlen + 1) < size )
  {
    dst[dstlen] = src[i];
    dstlen++;
    i++;
  }
  dst[dstlen] = '\0';
  return res;
  
}











int main() {
  char src[] = "hello world";
  char dst[] = "test test test test";
  printf("%d /n",ft_strlcat(dst,src,24));

  return 0;
}
