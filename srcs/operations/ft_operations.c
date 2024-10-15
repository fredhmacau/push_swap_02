/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmacau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 19:31:11 by fmacau            #+#    #+#             */
/*   Updated: 2024/10/14 10:07:17 by fmacau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_rrb(t_stack **stack_b, bool putstr)
{
	t_stack	*tmp;
	int		i;

	if (!*stack_b || !(*stack_b)->next)
		return ;
	i = 0;
	tmp = *stack_b;
	while ((*stack_b)->next)
	{
		*stack_b = (*stack_b)->next;
		i++;
	}
	(*stack_b)->next = tmp;
	while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp->next = NULL;
	if (putstr == true)
		ft_putendl_fd("rrb", 1);
}

void	ft_rb(t_stack **stack_b, bool putstr)
{
	t_stack	*tmp;

	if (!*stack_b || !(*stack_b)->next)
		return ;
	tmp = *stack_b;
	*stack_b = ft_lstnode(*stack_b);
	(*stack_b)->next = tmp;
	*stack_b = tmp->next;
	tmp->next = NULL;
	if (putstr == true)
		ft_putendl_fd("rb", 1);
}

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
