/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_till_4.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmacau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 02:00:27 by fmacau            #+#    #+#             */
/*   Updated: 2024/10/14 10:31:38 by fmacau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_sort_till_4(t_stack **stack_a, t_stack **stack_b)
{
	int	distance;

	if (is_sorted(stack_a))
		return ;
	distance = ft_get_distance(stack_a, ft_get_min(stack_a, -1));
	if (distance == 1)
		ft_sub_ra(stack_a);
	else if (distance == 2)
	{
		ft_sub_ra(stack_a);
		ft_sub_ra(stack_a);
	}
	else if (distance == 3)
		ft_sub_rra(stack_a);
	if (is_sorted(stack_a))
		return ;
	ft_sub_pb(stack_a, stack_b);
	ft_sort_till_3(stack_a);
	ft_sub_pa(stack_a, stack_b);
}
