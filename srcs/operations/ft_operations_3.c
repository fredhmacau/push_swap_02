/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations_3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmacau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 19:31:11 by fmacau            #+#    #+#             */
/*   Updated: 2024/10/14 10:06:21 by fmacau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_sub_pa(t_stack **stack_a, t_stack **stack_b)
{
	if (push(stack_a, stack_b) == -1)
		return (-1);
	ft_putendl_fd("pa", 1);
	return (0);
}

int	ft_sub_pb(t_stack **stack_a, t_stack **stack_b)
{
	if (push(stack_b, stack_a) == -1)
		return (-1);
	ft_putendl_fd("pb", 1);
	return (0);
}

int	rotate(t_stack **stack)
{
	t_stack	*head;
	t_stack	*tail;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	head = *stack;
	tail = ft_lstnode(head);
	*stack = head->next;
	head->next = NULL;
	tail->next = head;
	return (0);
}

int	ft_sub_ra(t_stack **stack_a)
{
	if (rotate(stack_a) == -1)
		return (-1);
	ft_putendl_fd("ra", 1);
	return (0);
}

int	ft_sub_rb(t_stack **stack_b)
{
	if (rotate(stack_b) == -1)
		return (-1);
	ft_putendl_fd("rb", 1);
	return (0);
}
