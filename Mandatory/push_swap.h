/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <aboumadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 15:41:34 by aboumadi          #+#    #+#             */
/*   Updated: 2022/02/20 15:14:11 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include<unistd.h>
# include<stdio.h>
# include<stdlib.h>

typedef struct s_list
{
	int				content;
	int				index;
	struct s_list	*next;
}	t_list;
t_list	*ft_lstnew(int content);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
int		ft_lstsize(t_list *lst);
void	ft_lstfree(t_list **stk);
long	ft_atoi(char *str2);
t_list	*ft_insert_stack(int argc, char **argv);
void	ft_print_stack(t_list *stk);
int		ft_isdigit(int n);
int		ft_isnum(char *str);
int		ft_isint(long n);
int		ft_is_duble(t_list *stk, char *str);
int		ft_is_sorted(t_list **stk);
void	ft_swap(t_list *stk);
void	ft_push(t_list **stack_a, t_list **stack_b);
void	ft_rotate(t_list **stk);
void	ft_reverse(t_list **stk_a);
void	ft_index(t_list **stk, int argc);
void	ft_sort2(t_list **stk_a);
void	ft_execute(t_list **stk_a, t_list **stk_b, char *str);
void	ft_sort3(t_list **stk);
void	ft_sort4(t_list **stk_a, t_list **stk_b);
void	ft_sort5(t_list **stk_a, t_list **stk_b);
void	ft_sort_n2(t_list **stk_a, t_list **stk_b, int argc);

#endif
