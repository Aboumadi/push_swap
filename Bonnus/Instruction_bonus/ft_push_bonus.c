/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <aboumadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 21:12:23 by aboumadi          #+#    #+#             */
/*   Updated: 2022/02/20 16:06:03 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	ft_push(t_list **stk_a, t_list **stk_b)
{
	t_list	*tmp;
	t_list	*to;

	if (ft_lstsize(*stk_a) == 0)
		return ;
	tmp = *stk_a;
	to = *stk_b;
	(*stk_a) = (*stk_a)->next;
	tmp->next = NULL;
	if (!to)
	{
		to = tmp;
		to->next = NULL;
		*stk_b = to;
	}
	else
	{
		tmp->next = to;
		*stk_b = tmp;
	}
}
