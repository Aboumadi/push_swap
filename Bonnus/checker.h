/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumadi <aboumadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 15:41:34 by aboumadi          #+#    #+#             */
/*   Updated: 2022/02/20 04:03:14 by aboumadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include<unistd.h>
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
int		ft_lstsize(t_list *lst);
void	ft_lstfree(t_list **stk);
long	ft_atoi(char *str2);
t_list	*ft_insert_stack(int argc, char **argv);
int		ft_isdigit(int n);
int		ft_isnum(char *str);
int		ft_isint(long n);
int		ft_strlen(char *str);
int		ft_is_duble(t_list *stk, char *str);
void	ft_swap(t_list *stk);
void	ft_push(t_list **stack_a, t_list **stack_b);
void	ft_rotate(t_list **stk);
int		ra(t_list **stk);
int		pa(t_list **stack_a, t_list **stack_b);
int		pb(t_list **stack_a, t_list **stack_b);
void	ft_reverse(t_list **stk_a);
void	ft_index(t_list **stk, int argc);
void	ft_instruction(t_list **stk_a, t_list **stk_b, char *str);
char	*get_next_line(int fd);
char	*ft_strjoin(char *str, char *buff);
char	*ft_strchr(char *str, char c);

#endif
