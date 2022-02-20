/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_duble.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <aboumadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:45:53 by aboumadi          #+#    #+#             */
/*   Updated: 2022/02/19 14:03:06 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_is_duble(t_list *stk, char *str)
{
	int	tmp;

	tmp = ft_atoi(str);
	while (stk)
	{
		if (tmp == stk->content)
			return (0);
		stk = stk->next;
	}
	return (1);
}
