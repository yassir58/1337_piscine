/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_point.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelatman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 16:22:24 by yelatman          #+#    #+#             */
/*   Updated: 2021/07/13 17:22:53 by yelatman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft_point.h"
void set_point(t_point *point)
{
point->x = 42;
point->y = 21;
}
int main(void)
{
t_point point;
set_point(&point);

printf("%d",point.x);
return (0);
}
