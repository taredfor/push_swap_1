#include "push_swap.h"

void	ft_error(char *str)
{
	ft_putstr_fd(str, 1);
	exit(EXIT_FAILURE);
}

t_lst *lst_create_new(int data)
{
	t_lst *element;

	element = malloc(sizeof(t_lst));
	if (element == NULL)
		return (NULL);
	element->value = data;
	element->next = NULL;
	return (element);
}

void ft_lst_add_back(t_lst **head, t_lst *new)
{
	t_lst *last;

	if (!head || !new)
		return;
	if (*head)
	{
		last = *head;
		while (last->next)
			last = last->next;
		last->next = new;	 
	}
	else
		*head = new;
}

void duplicate_checker(t_lst *stk)
{
	t_lst *tmp;

	while (stk)
	{
		tmp = stk->next;
		while (tmp)
		{
			if (tmp->value == stk->value)
				ft_error("error");
			tmp = tmp->next;
		}
		stk = stk->next;
	}
}

void ft_checker(char *str)
{
	int it;

	it = 0;
	if ((ft_strncmp(str, "2147483647", 10) > 0 && ft_strlen(str) >= 10) \
		|| (ft_strncmp(str, "-2147483648", 11) > 0  && ft_strlen(str) >= 11))
		ft_error("Error\n");
	while (str[it])
	{
		if (it == 0 && (str[0] == '+' || str[0] == '-') && str[1])
		{
			if (ft_isdigit(str[1] && str[2]))
				it += 2;
			else
				it += 1; 
		}
		if (ft_isdigit(str[it]))
			ft_error("Error\n");
		it++;
	}
}

void ft_parsing(t_lst **a, char **argv, int len)
{
	int i;
	int num;
	int it;
	char **str;

	i = 1;
	while (i <= len)
	{
		str = ft_split(argv[i], ' ');
		if (!str)
			ft_error("error\n");
		it = 0;
		while (str[it])
		{
			ft_checker(str[it]);
			num = ft_atoi(str[it]);
			ft_lst_add_back(a, lst_create_new(num));
			free(str[it]);
			i++;
		}
	}
	free(str);
}

int	main(int argc, char **argv)
{
	int len;
	t_lst *a;
	t_lst *b;

	a = NULL;
	b = NULL;
	if (argc == 1)
	{
		len = argc -1;
		ft_parsing(&a, argv, len);
		duplicate_checker(a);
	}
	else
		ft_error("error\n");
	stack_print(a, 'a');
	return (0);
}