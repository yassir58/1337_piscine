/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelatman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:34:46 by yelatman          #+#    #+#             */
/*   Updated: 2021/07/02 09:38:26 by yelatman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<string.h>
#include<stdio.h>

int ft_strlen(char *str)
{
	int i;
	i =  0;
	while ( str[i] != '\0')
	{
		i++;
	}
	return (i);

}
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int res;
	unsigned int s1_len;
	unsigned int s2_len;

	
	s1_len = ft_strlen(s1);
	s2_len= ft_strlen(s2);
	i = 0;
	res = 0;
	while (i < n)
	{
		if(s1[i] != s2[i])
		{
			res = s1[i] - s2[i];
			break;
		}
	i++;
	}
	if(s1_len == 0 && s2_len == 0)
	{
		res = 0;
	}
	return (res);
}




int main(void)
{
	char str[] = "fkfkfk";
	char stb[] = "ansd";


	int a = ft_strncmp(str,stb,0);
	printf("%d",a);

}
