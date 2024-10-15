/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 12:06:56 by fmacau            #+#    #+#             */
/*   Updated: 2024/10/15 01:34:44 by fmacau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	t_stack	**stack_a;
	t_stack	**stack_b;

	if (ac < 2)
		exit(1);
	ft_check_all(ac, av);
	stack_a = NULL;
	stack_b = NULL;
	ft_parse_arg(stack_a, ac, av);
	if (ft_is_sorted_stack(stack_a))
	{
		ft_free(stack_a);
		ft_free(stack_b);
		return (0);
	}
	ft_free(stack_a);
	ft_free(stack_b);
	return (0);
}
