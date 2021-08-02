/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelatman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 20:30:13 by yelatman          #+#    #+#             */
/*   Updated: 2021/06/30 20:36:10 by yelatman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
int	ft_strlen(char *str)
{
	int l;

	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	return (l);
}

int main(void)
{

	char str[] = "hello world!";
	printf("%d",ft_strlen(str));



}



