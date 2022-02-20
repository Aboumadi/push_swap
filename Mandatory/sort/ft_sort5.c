/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <aboumadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 20:41:04 by aboumadi          #+#    #+#             */
/*   Updated: 2022/02/19 14:54:08 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_min(t_list **stk)
{
	t_list	*min;
	int		i;

	i = 1;
	min = *stk;
	while (min)
	{
		if (min->index == 0)
			break ;
		else
		{
			i++;
			min = min->next;
		}
	}
	return (i);
}

void	ft_sort5(t_list **stk_a, t_list **stk_b)
{
	int	i;

	i = find_min(stk_a);
	if (ft_lstsize(*stk_a) - i == 0)
		ft_execute(stk_a, NULL, "rra");
	else if (ft_lstsize(*stk_a) - i == 1)
	{
		ft_execute(stk_a, NULL, "rra");
		ft_execute(stk_a, NULL, "rra");
	}
	else if (ft_lstsize(*stk_a) - i == 2)
	{
		ft_execute(stk_a, NULL, "ra");
		ft_execute(stk_a, NULL, "ra");
	}
	else if (ft_lstsize(*stk_a) - i == 3)
		ft_execute(stk_a, NULL, "ra");
	ft_execute(stk_a, stk_b, "pb");
	ft_sort4(stk_a, stk_b);
	ft_execute(stk_a, stk_b, "pa");
}
