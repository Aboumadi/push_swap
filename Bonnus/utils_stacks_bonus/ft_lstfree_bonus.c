/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfree_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <aboumadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:53:09 by aboumadi          #+#    #+#             */
/*   Updated: 2022/02/20 00:51:22 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

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
