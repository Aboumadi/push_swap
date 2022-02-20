/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <aboumadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:32:09 by aboumadi          #+#    #+#             */
/*   Updated: 2022/02/20 03:56:50 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	check_instruction(char *str)
{
	int	i;

	i = 1;
	if (!ft_strcmp(str, "pa\n") || !ft_strcmp(str, "pb\n"))
		i = 0;
	if (!ft_strcmp(str, "sa\n") || !ft_strcmp(str, "sb\n"))
		i = 0;
	if (!ft_strcmp(str, "ss\n"))
		i = 0;
	if (!ft_strcmp(str, "ra\n") || !ft_strcmp(str, "rb\n"))
		i = 0;
	if (!ft_strcmp(str, "rr\n"))
		i = 0;
	if (!ft_strcmp(str, "rra\n") || !ft_strcmp(str, "rrb\n"))
		i = 0;
	if (!ft_strcmp(str, "rrr\n"))
		i = 0;
	return (i);
}

void	ft_instruction(t_list **stk_a, t_list **stk_b, char *str)
{
	if (check_instruction(str))
	{
		write (1, "erreur\n", 7);
		exit(0);
	}
	else
	{
		if (!ft_strcmp(str, "sa\n") || !ft_strcmp(str, "ss\n"))
			ft_swap(*stk_a);
		if (!ft_strcmp(str, "sb\n") || !ft_strcmp(str, "ss\n"))
			ft_swap(*stk_b);
		if (!ft_strcmp(str, "pb\n"))
			ft_push(stk_a, stk_b);
		if (!ft_strcmp(str, "pa\n"))
			ft_push(stk_b, stk_a);
		if (!ft_strcmp(str, "ra\n") || !ft_strcmp(str, "rr\n"))
			ft_rotate(stk_a);
		if (!ft_strcmp(str, "rb\n") || !ft_strcmp(str, "rr\n"))
			ft_rotate(stk_b);
		if (!ft_strcmp(str, "rra\n") || !ft_strcmp(str, "rrr\n"))
			ft_reverse(stk_a);
		if (!ft_strcmp(str, "rrb\n") || !ft_strcmp(str, "rrr\n"))
			ft_reverse(stk_b);
	}
}
