/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmacau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 01:10:36 by fmacau            #+#    #+#             */
/*   Updated: 2024/10/06 01:10:41 by fmacau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void    ft_sa(t_stack **stack_node_a, bool putstr)
{
    t_stack *tmp_a;

    if (!(*stack_node_a) || !(*stack_node_a)->next)
        return ;
    tmp_a = *stack_node_a;
    *stack_node_a = (*stack_node_a)->next;
    tmp_a->next = (*stack_node_a)->next;
    if (putstr == true)
        ft_putendl_fd("sa",1);
}
