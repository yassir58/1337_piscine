/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelatman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 15:06:38 by yelatman          #+#    #+#             */
/*   Updated: 2021/06/28 08:38:09 by yelatman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = size - 1 ;
	while (i < (size / 2))
	{
		swap((tab + i), (tab + (j - i)));
		i++;
	}
}
