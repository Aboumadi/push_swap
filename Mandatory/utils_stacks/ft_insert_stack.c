/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <aboumadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:45:32 by aboumadi          #+#    #+#             */
/*   Updated: 2022/02/20 02:22:12 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_insert_stack(int argc, char **argv)
{
	t_list	*tmp;
	t_list	*new;
	int		i;

	tmp = NULL;
	i = 0;
	if (argc == 1)
		exit(0);
	while (++i < argc)
	{
		if (ft_isnum(argv[i]) && ft_isint(ft_atoi(argv[i]))
			&& ft_is_duble(tmp, argv[i]))
		{
			new = ft_lstnew(ft_atoi(argv[i]));
			ft_lstadd_back(&tmp, new);
		}	
		else
		{
			write (1, "erreur\n", 7);
			exit(0);
		}
	}
	return (tmp);
}
