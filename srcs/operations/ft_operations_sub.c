/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations_sub.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmacau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 19:31:11 by fmacau            #+#    #+#             */
/*   Updated: 2024/10/13 21:57:29 by fmacau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	push(t_stack **stack_to, t_stack **stack_from)
{
	t_stack	*tmp;
	t_stack	*head_to;
	t_stack	*head_from;

	if (ft_lstsize(*stack_from) == 0)
		return (-1);
	head_to = *stack_to;
	head_from = *stack_from;
	tmp = head_from;
	head_from = head_from->next;
	*stack_from = head_from;
	if (!head_to)
	{
		head_to = tmp;
		head_to->next = NULL;
		*stack_to = head_to;
	}
	else
	{
		tmp->next = head_to;
		*stack_to = tmp;
	}
	return (0);
}

int ft_sub_pa(t_stack **stack_a, t_stack **stack_b)
{
    if (push(stack_a, stack_b) == -1)
        return (-1);
    ft_putendl_fd("pa", 1);
    return (0);
}

int ft_sub_pb(t_stack **stack_a, t_stack **stack_b)
{
    if (push(stack_b, stack_a) == -1)
        return (-1);
    ft_putendl_fd("pb", 1);
    return (0);
}

int rotate(t_stack **stack)
{
    t_stack *head;
    t_stack *tail;

    if (ft_lstsize(*stack) < 2)
        return (-1);
    head = *stack;
    tail = ft_lstnode(head);
    *stack = head->next;
    head->next = NULL;
    tail->next = head;
    return (0);
}

int ft_sub_ra(t_stack **stack_a)
{
    if (rotate(stack_a) == -1)
        return (-1);
    ft_putendl_fd("ra", 1);
    return (0);
}

int ft_sub_rb(t_stack **stack_b)
{
    if (rotate(stack_b) == -1)
        return (-1);
    ft_putendl_fd("rb", 1);
    return (0);
}