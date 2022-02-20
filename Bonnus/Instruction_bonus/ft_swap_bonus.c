/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <aboumadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:47:44 by aboumadi          #+#    #+#             */
/*   Updated: 2022/02/20 15:08:27 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	ft_swap(t_list *stk)
{
	int		sw;
	t_list	*tmp1;
	t_list	*tmp2;

	if (stk && ft_lstsize(stk) != 1)
	{
		tmp1 = stk;
		tmp2 = stk->next;
		sw = tmp1->content;
		tmp1->content = tmp2->content;
		tmp2->content = sw;
	}
}
