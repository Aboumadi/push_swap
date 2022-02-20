/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_n2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <aboumadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 00:56:30 by aboumadi          #+#    #+#             */
/*   Updated: 2022/02/19 16:01:28 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_max_bits(t_list *stack_a)
{
	int		lstsize;
	int		max_num;
	int		max_bits;
	t_list	*temp;

	temp = stack_a;
	max_bits = 0;
	lstsize = ft_lstsize(temp);
	max_num = lstsize;
	while ((max_num >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	ft_sort_n2(t_list **stack_a, t_list **stack_b, int argc)
{
	int		i;
	int		j;
	int		max_bits;
	int		lstsize;

	i = 0;
	max_bits = ft_max_bits(*stack_a);
	ft_index(stack_a, argc);
	lstsize = ft_lstsize(*stack_a);
	while (i < max_bits)
	{
		j = 0;
		while (j++ < lstsize)
		{
			if ((((*stack_a)->index >> i) & 1) == 1)
				ft_execute(stack_a, NULL, "ra");
			else
				ft_execute(stack_a, stack_b, "pb");
		}
		while (ft_lstsize(*stack_b) != 0)
			ft_execute (stack_a, stack_b, "pa");
		i++;
	}
}
