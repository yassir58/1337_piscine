/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelatman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 13:55:25 by yelatman          #+#    #+#             */
/*   Updated: 2021/07/02 07:32:23 by yelatman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>


int ft_strlen(char *str)
{
	int l;

	l = 0;
	while ( str[l] != '\0')
	{
		l++;
	}
	return (l);
}

int	ft_strcmp(char *s1, char *s2)
{
	int i;
	int res;
	int s1_len;
	int s2_len;


	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	i = 0;
	res = 0;

	if (s1_len == 0)
		res = 0 - s2[0]; 
	else if ( s2_len == 0)
		res = s1[0] - 0 ;

	while (s1[i] != '\0')
	{
		if(s1[i] != s2[i])
		{
			res = s1[i] - s2[i];
			break;
		}
		else if (s1[i] == '\0' && s2[i] != 0)
		{
				res = s1[s2_len] - '\0' ;
		}else if (s2[i] == '\0' && s1[i] != '\0')
		{
				res = '\0' -  s2[s1_len];
		}
		i++ ;
	}
	return (res);
}




int main(void)
{
	char str[] = "	445655";
	char stb[] = " i4565652";


	int a = ft_strcmp(str,stb);
	printf("%d",a);

}
