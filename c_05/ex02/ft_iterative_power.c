/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelatman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 17:55:13 by yelatman          #+#    #+#             */
/*   Updated: 2021/07/08 10:24:44 by yelatman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int pow)
{
	int	i;
	int	tmp;

	tmp = nb;
	i = pow;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (pow == 0)
		return (1);
	while (i > 1)
	{
		tmp *= nb;
		i--;
	}
	return (tmp);
}
