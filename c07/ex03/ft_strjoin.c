/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelatman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 11:00:28 by yelatman          #+#    #+#             */
/*   Updated: 2021/07/11 16:27:41 by yelatman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


void	ft_strcat(char *dest,char *src,int index)
{
	int len;
	int i;

	len = 0;
	i = 0;

	if(index == 0 )
	{
		len = 0;
	}
	else 
	{
		while (dest[len] != '\0')
			len++;
	}
	
	while (dest[len] != '\0')
	{
		dest[len] = src[i];
		i++;
		len++;
	}
	dest[len] = '\0' ;
}

char *ft_strjoin(int size, char **strs)
{
	char *str;
	int i;
	char *arr[];

	i = 0;
	str =(char*)malloc(sizeof(char) * 16 + 1);
	while (i < size + (size - 1))
	{
		if(i % 2 == 0)
			arr[i] = strs[i];
		else
			arr[i] = sep;
	/*	ft_strcat(str,strs[i],i);*/
		i++;
	}
	return (str);
}


int main(void)
{

	char *str[] = {"abcd","efgh","ijkl","mnop"};

	printf("%s\n",ft_strjoin(4,str));


}

	
