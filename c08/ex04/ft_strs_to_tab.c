/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelatman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 17:26:34 by yelatman          #+#    #+#             */
/*   Updated: 2021/07/13 18:06:59 by yelatman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int ft_strlen(char *str)
{
	int i ;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		src_length;
	int		i;

	i = 0;
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

int main(void)
{
	t_stock_str *s_p ;

	s_p = malloc(sizeof(t_ );
	
	s_p.size = 12;
	s_p.str = "hello world";
	s_p.copy = s_p.str;

	printf("%d \n",s_p.size);
	printf("%s \n",s_p.str);
	printf("%s \n",s_p.copy);
}
