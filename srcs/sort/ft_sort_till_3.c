/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_till_3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmacau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 14:30:51 by fmacau            #+#    #+#             */
/*   Updated: 2024/10/15 08:37:58 by fmacau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_sorted_3(t_stack **stack_a)
{
	ft_sub_ra(stack_a);
	ft_sub_sa(stack_a);
	ft_sub_rra(stack_a);
}

void	ft_refactor_op(t_stack **stack_a, t_stack *head, int min)
{
	if (head->next->index == min)
		ft_sub_ra(stack_a);
	else
	{
		ft_sub_sa(stack_a);
		ft_sub_rra(stack_a);
	}
}

void	ft_sort_till_3(t_stack **stack_a)
{
	t_stack	*head;
	int		min;
	int		next_min;

	head = *stack_a;
	min = ft_get_min(stack_a, -1);
	next_min = ft_get_min(stack_a, min);
	if (is_sorted(stack_a))
		return ;
	if (head->index == min && head->next->index != next_min)
		ft_sorted_3(stack_a);
	else if (head->index == next_min)
	{
		if (head->next->index == min)
			ft_sub_sa(stack_a);
		else
			ft_sub_rra(stack_a);
	}
	else
		ft_refactor_op(stack_a, head, min);
}
