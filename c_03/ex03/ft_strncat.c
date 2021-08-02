/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelatman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 14:59:41 by yelatman          #+#    #+#             */
/*   Updated: 2021/07/02 07:44:58 by yelatman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
int str_len(char *str)
{
	int i;
	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	return (i);
}




char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int n;
	unsigned int j;
	unsigned int k;

	i = 0;
	n = str_len(src);
	j = str_len(dest);
	while (i < nb)
	{
		dest[j + i] = src[i];
		if (nb > n &&  i == n)
			break;
		i++;
	}
	k = str_len(dest);
	dest[k] = '\0';

	return (dest);

}


int main(void)
{
	char dest[45] = "hello world ! ";
	char src[] = "wonderfull world";

	printf(" %s \n",strncat(dest,src,4));
}
