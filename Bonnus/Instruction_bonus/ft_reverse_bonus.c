/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <aboumadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 20:31:30 by aboumadi          #+#    #+#             */
/*   Updated: 2022/02/20 15:09:57 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	ft_reverse(t_list **stk_a)
{
	t_list	*top;
	t_list	*last;
	t_list	*tmp;

	if (*stk_a && ft_lstsize(*stk_a) != 1)
	{
		top = *stk_a;
		last = ft_lstlast(*stk_a);
		tmp = *stk_a;
		while (tmp->next->next)
			tmp = tmp->next;
		tmp->next = NULL;
		last->next = top;
		*stk_a = last;
	}
}
