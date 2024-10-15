/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmacau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 06:17:56 by fmacau            #+#    #+#             */
/*   Updated: 2024/10/15 08:01:58 by fmacau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	swap(t_stack **stack)
{
	t_stack	*head;
	t_stack	*next;
	int		tmp_val;
	int		tmp_index;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	head = *stack;
	next = head->next;
	if (!head && !next)
		return (-1);
	tmp_val = head->nbr;
	tmp_index = head->index;
	head->nbr = next->nbr;
	head->index = next->index;
	next->nbr = tmp_val;
	next->index = tmp_index;
	return (0);
}

int	ft_sub_sa(t_stack **stack_a)
{
	if (swap(stack_a) == -1)
		return (-1);
	ft_putendl_fd("sa", 1);
	return (0);
}

int	ft_reverse_rotate(t_stack **stack)
{
	t_stack	*head;
	t_stack	*tail;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	head = *stack;
	tail = ft_lstnode(head);
	while (head)
	{
		if (head->next->next == NULL)
		{
			head->next = NULL;
			break ;
		}
		head = head->next;
	}
	tail->next = *stack;
	*stack = tail;
	return (0);
}

int	ft_sub_rra(t_stack **stack_a)
{
	if (ft_reverse_rotate(stack_a) == -1)
		return (-1);
	ft_putendl_fd("rra", 1);
	return (0);
}
