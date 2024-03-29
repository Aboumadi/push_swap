/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <aboumadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:45:02 by aboumadi          #+#    #+#             */
/*   Updated: 2022/02/19 14:03:17 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

long	ft_atoi(char *str2)
{
	long	i;
	long	j;
	long	n;

	i = 0;
	j = 1;
	n = 0;
	while (str2[i] == 32 || (str2[i] >= 9 && str2[i] <= 13))
		i++;
	if (str2[i] == '+' || str2[i] == '-')
	{
		if (str2[i] == '-')
			j = j * -1;
		i++;
	}
	while (str2[i] >= '0' && str2[i] <= '9')
	{
		n = (n * 10) + (str2[i] - 48);
		i++;
	}
	return (n * j);
}
