/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <aboumadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:46:03 by aboumadi          #+#    #+#             */
/*   Updated: 2022/02/19 15:24:57 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_is_sorted(t_list **stk)
{
	t_list	*tmp1;
	t_list	*tmp2;

	tmp1 = *stk;
	tmp2 = tmp1->next;
	while (tmp1 && tmp2)
	{
		if (tmp1->content < tmp2->content)
		{
			tmp1 = tmp1->next;
			tmp2 = tmp1->next;
		}
		else
			return (1);
	}
	ft_lstfree(stk);
	return (0);
}
