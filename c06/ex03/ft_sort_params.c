/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelatman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 11:52:05 by yelatman          #+#    #+#             */
/*   Updated: 2021/07/09 13:30:45 by yelatman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
int    ft_strcmp(char *s1, char *s2)
{
    int i ;
    i = 0 ;
    while ( s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] )
    {
        i++;
    }
            return (s1[i] - s2[i]);
}

int main(int argc , char *argv[])
{
    int i;
    int j;
    int k ;
    int n;
    int size ;
    k = 0;
    i = 0;
    j = 0;

   /* char *argv[] = {"rida" , "zack" , "alex" , "jhon" , "bob" , "david"};
    int argc = 6 ;*/
    size = argc - 1;
    while (i <= (size-1))
    {
        j= i+1 ;
        while ( j <= size )
        {
            if(ft_strcmp(argv[i],argv[j]) > 0)
            {
                char *temp;
                temp = argv[i];
                argv[i] = argv[j];
                argv[j] = temp ;
            }
            j++;
        }
        i++;
    }

   int c = 1 ;

        while (c < argc)
        {
            k = 0;
  while (argv[c][k] != '\0')
        {
            write (1, &argv[c][k], 1);
            k++;
        }
        write (1, "\n", 1);
        c++;
        }
}
