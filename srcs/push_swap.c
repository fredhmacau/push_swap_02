/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 12:06:56 by fmacau            #+#    #+#             */
/*   Updated: 2024/10/14 10:12:46 by fmacau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*stack_a;

	stack_a = NULL;
	if (ac < 2 || *av[1] == '\0' || *av[1] == '\t')
		exit(1);
	if (ac == 2)
	{
		if (ft_check_only_arg(av) == false)
			ft_error();
		if (!ft_check_sorted_1(av))
			stack_a = ft_parse_arg(ac, av);
	}
	if (ac > 2)
	{
		if (ft_check_any_arg(ac, av) == false)
			ft_error();
		if (!ft_check_sorted_2(av))
			stack_a = ft_parse_arg(ac, av);
	}
	ft_sort(&stack_a);
	ft_free(&stack_a);
	return (0);
}
