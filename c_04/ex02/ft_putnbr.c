/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelatman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 20:41:19 by yelatman          #+#    #+#             */
/*   Updated: 2021/06/30 21:14:42 by yelatman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}



void	ft_putnbr(int nb)
{
	long nbr;

	nbr = nb ;
	if( nbr < 0)
	{
	
		ft_putchar('-');
		nbr  = nbr * -1;
	}
	if(nbr > 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}else {

	ft_putchar(nbr + 48);
	}
}



int main(void)
{

	ft_putnbr(1234567);
}
