/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelatman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 15:58:32 by yelatman          #+#    #+#             */
/*   Updated: 2021/06/28 08:31:08 by yelatman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	lastUnsorted ;

	lastUnsortd = size - 1 ;
	i = 0;
	while (i < lastUnsorted)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				swap((tab + i), (tab + j));
			}
			j++;
		}
		i++;
	}
}
