/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelatman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 12:43:23 by yelatman          #+#    #+#             */
/*   Updated: 2021/07/08 15:41:12 by yelatman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	temp;
	int	res;

	if (nb < 0)
		return (0);
	res = nb;
	temp = nb;
	while (temp != 1)
	{
		res *= --temp;
	}
	return (res);
}



/////// tests
#include <stdio.h>
int main(void)
{
	int a =10;

	printf("%d",ft_iterative_factorial(a));


}
