#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef struct s_lst
{
	int 		value;
	struct s_lst *next;
}	t_lst;

int		main(int argc, char **argv);
void	ft_parsing(t_lst **a, char **argv, int len);
void	ft_checker(char *str);
void	ft_error(char *str);
t_lst *lst_create_new(int data);
void ft_lst_add_back(t_lst **head, t_lst *new);

void 	stack_print(t_lst *stack, char name);
void 	stacks_print(t_lst *a, t_lst *b);

#endif
