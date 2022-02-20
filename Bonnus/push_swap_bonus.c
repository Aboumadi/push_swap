/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <aboumadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:47:54 by aboumadi          #+#    #+#             */
/*   Updated: 2022/02/20 16:08:26 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_is_sorted2(t_list *stack_a, t_list *stack_b)
{
	int		i;
	t_list	*temp1;

	i = 1;
	temp1 = stack_a;
	while (temp1 && temp1->next)
	{
		if (temp1->content > temp1->next->content)
			i = 0;
		temp1 = temp1->next;
	}
	if (i == 1 && !stack_b)
	{
		write(1, "OK\n", 3);
		ft_lstfree(&stack_a);
		ft_lstfree(&stack_b);
	}
	else
	{
		ft_lstfree(&stack_a);
		ft_lstfree(&stack_b);
		write(1, "KO\n", 3);
	}
}

int	main(int argc, char **argv)
{
	t_list	*tmp;
	t_list	*b;
	char	*str;

	b = NULL;
	if (argc < 2)
		return (1);
	tmp = ft_insert_stack(argc, argv);
	while (1)
	{
		str = get_next_line(1);
		if (!str)
			break ;
		ft_instruction(&tmp, &b, str);
		free(str);
	}
	ft_is_sorted2(tmp, b);
}
