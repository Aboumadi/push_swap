/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <aboumadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:53:09 by aboumadi          #+#    #+#             */
/*   Updated: 2022/02/19 13:49:59 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstfree(t_list **stk)
{
	t_list	*tmp;

	tmp = *stk;
	while (tmp)
	{
		tmp = (*stk)->next;
		free (*stk);
		*stk = tmp;
	}
}
