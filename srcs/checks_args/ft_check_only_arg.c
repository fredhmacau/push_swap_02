/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_only_arg.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmacau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 14:50:07 by fmacau            #+#    #+#             */
/*   Updated: 2024/10/16 13:05:19 by fmacau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static int	ft_contains(int num, char **argv, int i)
{
	i++;
	while (argv[i])
	{
		if (ft_atoi(argv[i]) == num)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_isnum(char *num)
{
	int	i;

	i = 0;
	if (num[0] == '-' || num[0] == '+')
		i++;
	if (num[i] == '\0')
		return (0);
	while (num[i])
	{
		if (!ft_isdigit(num[i]))
			return (0);
		i++;
	}
	return (1);
}

void	ft_put_error_memory_free(char **args, int argc)
{
	if (argc > 2)
		ft_error();
	else
	{
		ft_free(args);
		ft_error();
	}
}

void	ft_process(char **args, int i, int argc)
{
	long	tmp;

	tmp = ft_atoi(args[i]);
	if (!ft_isnum(args[i]))
		ft_put_error_memory_free(args, argc);
	if (ft_contains(tmp, args, i))
		ft_put_error_memory_free(args, argc);
	if (tmp < -2147483648 || tmp > 2147483647)
		ft_put_error_memory_free(args, argc);
}

void	ft_check_args(int argc, char **argv)
{
	int		i;
	char	**args;	

	i = 0;
	if (argc == 2)
	{
		args = ft_split(argv[1], ' ');
		if (args[0] == NULL)
			ft_put_error_memory_free(args, argc);
	}
	else
	{
		i = 1;
		args = argv;
	}
	while (args[i])
	{
		ft_process(args, i, argc);
		i++;
	}
	if (argc == 2)
		ft_free(args);
}
