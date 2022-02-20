/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_execute.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <aboumadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:32:09 by aboumadi          #+#    #+#             */
/*   Updated: 2022/02/20 19:10:51 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_print(char *str)
{
	if (!ft_strcmp(str, "sa") || !ft_strcmp(str, "sb"))
		write (1, str, 2);
	else if (!ft_strcmp(str, "ss"))
		write (1, str, 2);
	else if (!ft_strcmp(str, "ra") || !ft_strcmp(str, "rb"))
		write (1, str, 2);
	else if (!ft_strcmp(str, "rr"))
		write (1, str, 2);
	if (!ft_strcmp(str, "pa") || !ft_strcmp(str, "pb"))
		write (1, str, 2);
	else if (!ft_strcmp(str, "rra") || !ft_strcmp(str, "rrb"))
		write (1, str, 3);
	else if (!ft_strcmp(str, "rrr"))
		write (1, str, 3);
}

void	ft_execute(t_list **stk_a, t_list **stk_b, char *str)
{
	ft_print(str);
	write (1, "\n", 1);
	if (!ft_strcmp(str, "sa") || !ft_strcmp(str, "ss"))
		ft_swap(*stk_a);
	if (!ft_strcmp(str, "sb") || !ft_strcmp(str, "ss"))
		ft_swap(*stk_b);
	if (!ft_strcmp(str, "pb"))
		ft_push(stk_a, stk_b);
	if (!ft_strcmp(str, "pa"))
		ft_push(stk_b, stk_a);
	if (!ft_strcmp(str, "ra") || !ft_strcmp(str, "rr"))
		ft_rotate(stk_a);
	if (!ft_strcmp(str, "rb") || !ft_strcmp(str, "rr"))
		ft_rotate(stk_b);
	if (!ft_strcmp(str, "rra") || !ft_strcmp(str, "rrr"))
		ft_reverse(stk_a);
	if (!ft_strcmp(str, "rrb") || !ft_strcmp(str, "rrr"))
		ft_reverse(stk_b);
}
