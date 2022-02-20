/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <aboumadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:57:20 by aboumadi          #+#    #+#             */
/*   Updated: 2022/02/19 14:48:57 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort3(t_list **stk)
{
	int	a;
	int	b;
	int	c;

	a = (*stk)->content;
	b = (*stk)->next->content;
	c = (*stk)->next->next->content;
	if ((b < a) && (b < c) && (a < c))
		ft_execute(stk, NULL, "sa");
	else if ((c < b) && (c < a) && (b < a))
	{
		ft_execute(stk, NULL, "sa");
		ft_execute(stk, NULL, "rra");
	}
	else if ((b < a) && (b < c) && (a > c))
		ft_execute(stk, NULL, "ra");
	else if ((b > a) && (b > c) && (a < c))
	{
		ft_execute(stk, NULL, "sa");
		ft_execute(stk, NULL, "ra");
	}
	else if ((b > a) && (b > c) && (a > c))
		ft_execute(stk, NULL, "rra");
}
