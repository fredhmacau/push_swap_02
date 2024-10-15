/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_till_4.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmacau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 02:00:27 by fmacau            #+#    #+#             */
/*   Updated: 2024/10/15 00:22:41 by fmacau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_sort_till_4(t_stack **stack_a, t_stack **stack_b)
{
	int		min_index;

	min_index = ft_min_index((*stack_a));
	while ((*stack_a)->index != min_index)
		ft_ra(stack_a, true);
	ft_pb(stack_a, stack_b, true);
	ft_sort_till_3(stack_a);
	ft_pa(stack_a, stack_b, true);
}
