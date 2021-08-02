/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelatman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 10:27:53 by yelatman          #+#    #+#             */
/*   Updated: 2021/07/11 10:59:44 by yelatman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int i;

	size = max - min;
	i = 0;
	range = NULL;
	if (size > 0)
	{
		range[0] = (int*)malloc(sizeof(int) * size);
		if (range[0] != NULL)
		{
			while (min != max)
			{
				range[0][i] = min;
				min++;
				i++;
			}
			return (size);
		}
		return (-1);
	}
	return (0);
}
