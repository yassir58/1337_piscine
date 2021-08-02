/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelatman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 16:33:01 by yelatman          #+#    #+#             */
/*   Updated: 2021/07/08 09:13:55 by yelatman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	int	i;
	int	res;

	i = nb - 1;
	res = 1;
	while (i > 2)
	{
		if (nb % i == 0)
		{
			res = 0;
			break ;
		}
		i--;
	}
	return (res);
}