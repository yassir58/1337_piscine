/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelatman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 13:55:25 by yelatman          #+#    #+#             */
/*   Updated: 2021/06/30 14:17:58 by yelatman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>


int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	int res;
	
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
	return (res);
}




int main(void)
{
	char str[] = "helpo";
	char stb[] = "hello";


	int a = ft_strncmp(str,stb,4);
	printf("%d",a);

}
