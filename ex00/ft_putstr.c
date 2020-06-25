/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nddlamin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 14:00:23 by nddlamin          #+#    #+#             */
/*   Updated: 2020/06/25 14:05:01 by nddlamin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int index;
	index = 0;
	while(str[index] != '\0')
	{
		ft_putchar(str[index]);
		index = index + 1;;
	}
}

