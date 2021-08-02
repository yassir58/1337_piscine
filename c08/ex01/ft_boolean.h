/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelatman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 13:24:53 by yelatman          #+#    #+#             */
/*   Updated: 2021/07/13 17:25:44 by yelatman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef UNISTD_H
#include <unistd.h>
#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
typedef int t_bool;
#ifndef  EVEN
# define EVEN(x) (x % 2) == 0
#ifndef  TRUE
# define TRUE 1
#ifndef   FALSE
# define  FALSE 0
#ifndef  EVEN_MSG 
# define EVEN_MSG  "I have an even number of arguments."
#ifndef  ODD_MSG
# define ODD_MSG "I have an odd number of arguments."
#ifndef  SUCCESS 
# define SUCCESS 0
#endif

