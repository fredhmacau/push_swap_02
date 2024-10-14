/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_node_in_stack.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmacau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 19:43:09 by fmacau            #+#    #+#             */
/*   Updated: 2024/10/14 10:49:00 by fmacau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_add_node_in_stack(t_stack **stack, t_stack *new_node)
{
	if (!stack)
		return ;
	if (*stack == NULL)
		*stack = new_node;
	else
		(ft_lstnode(*stack))->next = new_node;
}
