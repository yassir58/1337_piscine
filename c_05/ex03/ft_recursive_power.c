/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelatman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 15:26:39 by yelatman          #+#    #+#             */
/*   Updated: 2021/07/08 10:49:26 by yelatman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_power(int nb, int power)
{
	int	last;

	last = nb;
	if (nb < 0)
		return (0);
	if (power == 0)
		return (1);
	if (nb == 0)
		return (1);
	else
		return (last * ft_recursive_power(nb, --power));
}
