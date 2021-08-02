/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelatman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 09:43:34 by yelatman          #+#    #+#             */
/*   Updated: 2021/07/11 10:06:49 by yelatman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}


char *ft_strdup(char *src)
{
	char *dest;
	int src_length;
	int i;

	i =  0;
	dest = NULL;
	src_length = ft_strlen(src);
	dest = malloc(sizeof(char) * src_length + 1);
   	if (dest != NULL)
	{
		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (dest);
}

/*
int main(void)
{
	char str[] = "hello world , good morning";
	printf("%s\n",ft_strdup(str));
}*/
