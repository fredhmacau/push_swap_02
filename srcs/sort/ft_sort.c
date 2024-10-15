/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmacau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 16:06:47 by fmacau            #+#    #+#             */
/*   Updated: 2024/10/15 01:37:12 by fmacau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_sort(t_stack **stack_a, t_stack **stack_b)
{
	int		i;

	i = ft_lstsize(*stack_a);
	if (!stack_a)
		return ;
	if (i == 1)
		exit(1);
	if (i == 2)
		ft_sa(stack_a, true);
	if (i == 3)
		ft_sort_till_3(stack_a);
	if (i == 4)
		ft_sort_till_4(stack_a, stack_b);
	if (i == 5)
		ft_sort_till_5(stack_a, stack_b);
	if (i > 5)
		ft_sort_big_numbers(stack_a, stack_b);
	
}
