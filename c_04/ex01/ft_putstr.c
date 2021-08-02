/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelatman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 20:36:43 by yelatman          #+#    #+#             */
/*   Updated: 2021/06/30 20:40:56 by yelatman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>



void ft_putstr(char *str)
{
	int i;

	i = 0;
	while ( str[i] != '\0')
	{
		write(1, (str + i), 1);
		i++;
	}
}

int main(void)
{
	char str[] = "hello world";

	ft_putstr(str);



}


