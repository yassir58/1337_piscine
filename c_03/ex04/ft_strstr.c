/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelatman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 15:51:01 by yelatman          #+#    #+#             */
/*   Updated: 2021/07/02 08:12:11 by yelatman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>


int str_len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	char *ptr;
	int i;
	int j;
	int s_l;
	int t_l;
	int sub_exsist;


	s_l = str_len(str);
	t_l = str_len(to_find);
	i = 0;
	j = 0;
	while ( str[i] != '\0')
	{
		sub_exsist = 0;

		if(str[i] == to_find[0])
		{
			while ( to_find[j] != '\0')
			{
				if(str[i+j] == to_find[j])
				{
					sub_exsist++;
				}
				
						j++;
			}
			if ( sub_exsist == t_l )
			{
				ptr = (str +i);
				break ;
			}

		}
		i++;


}


	
	if (s_l ==  0)
	{
		return ("(null)");
	}
	if (t_l == 0)
	{
		return (str);
	}
	else {
	return (ptr);
	}


}

int	main(void)
{
	char str[] = "";
	
	char sub[] = "jdkjdkj";
	
	printf("s %s \n",strstr(str,sub));
	printf("%s \n",ft_strstr(str,sub));



}
