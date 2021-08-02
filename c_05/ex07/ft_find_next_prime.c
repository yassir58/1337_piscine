/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelatman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 17:41:25 by yelatman          #+#    #+#             */
/*   Updated: 2021/07/08 09:18:32 by yelatman         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	i;
	int	res;

	res = 0;
	i = nb + 1;
	if (nb == 2147483647)
		res = nb;
	else if (ft_is_prime(nb) == 1)
		res = nb ;
	else
	{
		while (i != 0)
		{
			if (ft_is_prime(i) == 1)
			{
				res = i;
				break ;
			}
			i++;
		}
	}
	return (res);
}
