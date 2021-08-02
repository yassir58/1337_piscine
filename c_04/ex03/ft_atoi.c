/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelatman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 09:21:23 by yelatman          #+#    #+#             */
/*   Updated: 2021/07/02 09:57:41 by yelatman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int is_num(char c)
{
	if(c >= 48 && c <= 57)
		return (1);
	return (0);
}

int str_to_int(char *str,int s)
{
	int res;
	int sign;
	int i;
	i = 0;
	res = 0;
	sign = 1;
	i = 0;
	if(s == 0)
	{
		sign = -1;
	}
	while( str[i] != '\0')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}

	return res*sign;


}

int ft_strlen(char *str)
{
	int l;

	l = 0;
	while ( str[l] != '\0')
	{
		l++;
	}
	return (l);
}

int  ft_atoi(char *str)
{
	int i;
	int j;
	int k;
	int sign_counter;
	int break_flag;
	int len = ft_strlen(str);
	char str_num[10];
	i = 0;
	j = 0;
	k = 0;
	sign_counter = 0;
	break_flag = 0;
	while (str[i] != '\0')
	{   
		
		if(is_num(str[i]) == 1 )
		{
			j = i ;
			while ((j+1) < len)
			{
				if(is_num(str[j]) != 1)
				{
					break_flag = 1;
					break ;
				}else
				{	
				str_num[k] =  str[j];
				k++;
				}
				j++;
			}
		}
		if( break_flag == 1)
		{
			break;
		}

		i++;
	}
	return (str_to_int(str_num,1));

}

	
int main(void)
{
	char *str ="  ---+--+1234ab567";
	char st[] = "12345";	
	char test_str[] = "jjsjsj,slls*s;";

	printf(" %d ", ft_atoi(str));



}
