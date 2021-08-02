/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelatman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 14:23:41 by yelatman          #+#    #+#             */
/*   Updated: 2021/07/02 07:43:21 by yelatman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<string.h>
int	str_len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *ft_strcat(char *dest, char *src)
{
	int i;
	int n;
	int s;
	int j;

	n = str_len(dest);
	s = str_len(src);
	i = 0;
	j = 0;
	if( n == 0)
	{
		while ( src[j] != '\0')
		{
			dest[j] = src[j];
			j++;
		}
		n = str_len(dest);
		dest[n] = '\0';


	} 
	else
	{
	while (i < n)
	{
		dest[n + i] = src[i];
		i++;
	}
	dest[n + s] = '\0';	
	}
	return dest;
}




int main(void)
{
	char dest[60] = "hello world , good morning ,";
	char src[]  = " great school!";
	printf("%s \n",strcat(dest,src));

}
