/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <aboumadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:47:54 by aboumadi          #+#    #+#             */
/*   Updated: 2022/02/20 02:51:38 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(t_list **stk_a, t_list **stk_b, int argc)
{
	if (!ft_is_sorted(stk_a) || ft_lstsize(*stk_a) == 1)
		exit(0);
	if (ft_lstsize(*stk_a) == 2)
		ft_sort2(stk_a);
	else if (ft_lstsize(*stk_a) == 3)
		ft_sort3(stk_a);
	else if (ft_lstsize(*stk_a) == 4)
		ft_sort4(stk_a, stk_b);
	else if (ft_lstsize(*stk_a) == 5)
		ft_sort5(stk_a, stk_b);
	else
		ft_sort_n2(stk_a, stk_b, argc);
	ft_lstfree(stk_a);
	ft_lstfree(stk_b);
}

int	main(int argc, char **argv)
{
	t_list	*tmp;
	t_list	*b;

	b = NULL;
	tmp = ft_insert_stack(argc, argv);
	if (!ft_is_sorted(&tmp))
		exit(0);
	ft_index(&tmp, argc);
	ft_sort(&tmp, &b, argc);
}
