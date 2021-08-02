/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelatman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 19:10:42 by yelatman          #+#    #+#             */
/*   Updated: 2021/07/02 08:40:34 by yelatman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<string.h>

unsigned int str_len(char *str)
{
	unsigned int i;

	i = 0;
	while ( str[i] !=  '\0')
	{
		i++;
	}
	return (i);

}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{

	unsigned int d;
	unsigned int s;
	unsigned int f;
	unsigned int i;
	
	i = 0;
	d = str_len(dest);
	s = str_len(src);
	f = d + s;
	if ( size > 0)
	{
	while (src[i] != 0 )
	{
		dest[d+i] = src[i];
	  	 i++;	
	}

		dest[s + d] = '\0';

	}
	else if (size > d)
	{
	while (src[i] != 0 )
	{
		dest[d+i] = src[i];
	  	 i++;	
	}
	}

	
	printf(" dest length : %d\n",d);
	printf("src length : %d\n",s);
	printf(" the whole length : %d\n",f);
	return f;
}



int main(void)
{
	char str[28] = "hello world";

	char dest[50] = "";
	
/*	printf("built_in result => %lu \n",strlcat(dest,str,50)); */
	printf("ft_strlcat result => %u \n",ft_strlcat(dest,str,12));
	printf(" %s \n", dest);

}
