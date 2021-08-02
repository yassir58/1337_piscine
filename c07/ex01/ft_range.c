/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelatman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 10:07:37 by yelatman          #+#    #+#             */
/*   Updated: 2021/07/11 10:19:29 by yelatman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{

	int size;
	int *range;
	int i;

	size = max - min ;
	i = 0;
	range = NULL ;
	if (size > 0)
	{
		range = (int*)malloc(sizeof(int) * size);
		if (range != NULL)
		{
			while (min != max)
			{
				range[i] = min;
				min++;
				i++;
			}
		}
	}
	return (range);
}
