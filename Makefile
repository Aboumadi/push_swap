NAME = push_swap

NAMEB = checker

HEADER = Mandatory/push_swap.h

HEADERB = Bonnus/checker.h

CFLAGS = -Wall -Wextra -Werror

CC = gcc

SRCM =	Mandatory/utils_stacks/ft_lstadd_back.c\
		Mandatory/utils_stacks/ft_lstnew.c\
		Mandatory/utils_stacks/ft_lstadd_front.c\
		Mandatory/utils_stacks/ft_lstlast.c\
		Mandatory/utils_stacks/ft_lstsize.c\
		Mandatory/utils_stacks/ft_lstfree.c\
		Mandatory/utils_stacks/ft_insert_stack.c\
		Mandatory/utils/ft_is_duble.c\
		Mandatory/utils/ft_isdigit.c\
		Mandatory/utils/ft_is_sorted.c\
		Mandatory/utils/ft_atoi.c\
		Mandatory/utils/ft_isint.c\
		Mandatory/utils/ft_isnum.c\
		Mandatory/utils/ft_execute.c\
		Mandatory/utils/ft_index.c\
		Mandatory/Instruction/ft_swap.c\
		Mandatory/Instruction/ft_push.c\
		Mandatory/Instruction/ft_reverse.c\
		Mandatory/Instruction/ft_rotate.c\
		Mandatory/sort/ft_sort2.c\
		Mandatory/sort/ft_sort3.c\
		Mandatory/sort/ft_sort4.c\
		Mandatory/sort/ft_sort5.c\
		Mandatory/sort/ft_sort_n2.c\
		Mandatory/push_swap.c\

OBJM = ${SRCM:.c=.o}

SRCB =	Bonnus/utils_stacks_bonus/ft_lstadd_back_bonus.c\
		Bonnus/utils_stacks_bonus/ft_lstadd_front_bonus.c\
		Bonnus/utils_stacks_bonus/ft_lstnew_bonus.c\
		Bonnus/utils_stacks_bonus/ft_lstlast_bonus.c\
		Bonnus/utils_stacks_bonus/ft_lstsize_bonus.c\
		Bonnus/utils_stacks_bonus/ft_lstfree_bonus.c\
		Bonnus/utils_stacks_bonus/ft_insert_stack_bonus.c\
		Bonnus/utils_bonus/ft_is_duble_bonus.c\
		Bonnus/utils_bonus/ft_isdigit_bonus.c\
		Bonnus/utils_bonus/ft_atoi_bonus.c\
		Bonnus/utils_bonus/ft_isint_bonus.c\
		Bonnus/utils_bonus/ft_isnum_bonus.c\
		Bonnus/utils_bonus/ft_instruction_bonus.c\
		Bonnus/utils_bonus/ft_index_bonus.c\
		Bonnus/Instruction_bonus/ft_swap_bonus.c\
		Bonnus/Instruction_bonus/ft_push_bonus.c\
		Bonnus/Instruction_bonus/ft_reverse_bonus.c\
		Bonnus/Instruction_bonus/ft_rotate_bonus.c\
		Bonnus/push_swap_bonus.c\
		Bonnus/get_next_line/get_next_line.c\
		Bonnus/get_next_line/get_next_line_utils.c\
	
OBJB = ${SRCB:.c=.o}


all : $(NAME)

$(NAME) : $(OBJM) $(HEADER)
	@$(CC) $(CFLAGS) $(OBJM) -o $(NAME)

bonnus : $(NAMEB)

$(NAMEB) : $(OBJB) $(HEADERB)
	@$(CC) $(CFLAGS) $(OBJB) -o $(NAMEB)

clean : 
	@rm -rf $(OBJM) $(OBJB)

fclean : clean 
	@rm -rf $(NAME) $(NAMEB)  

re : fclean all bonnus