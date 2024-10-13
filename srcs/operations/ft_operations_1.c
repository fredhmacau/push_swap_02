/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmacau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 19:31:11 by fmacau            #+#    #+#             */
/*   Updated: 2024/10/11 19:33:02 by fmacau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"
void ft_sa(t_stack **stack_node_a, bool putstr)
{
    t_stack *tmp_a;

    if (!(*stack_node_a) || !(*stack_node_a)->next)
        return;
    tmp_a = *stack_node_a;
    *stack_node_a = (*stack_node_a)->next;
    tmp_a->next = (*stack_node_a)->next;
    if (putstr == true)
        ft_putendl_fd("sa", 1);
}

void ft_ra(t_stack **stack_a, bool putstr)
{
    t_stack *tmp;

    if (!*stack_a || !(*stack_a)->next)
        return;
    tmp = *stack_a;
    *stack_a = ft_lstnode(*stack_a);
    (*stack_a)->next = tmp;
    *stack_a = tmp->next;
    tmp->next = NULL;
    if (putstr == true)
        ft_putendl_fd("ra", 1);
}

void ft_rra(t_stack **stack_a, bool putstr)
{
    t_stack *tmp;
    int i;

    if (!*stack_a || !(*stack_a)->next)
        return;
    i = 0;
    tmp = *stack_a;
    while ((*stack_a)->next)
    {
        *stack_a = (*stack_a)->next;
        i++;
    }
    (*stack_a)->next = tmp;
    while (i > 1)
    {
        tmp = tmp->next;
        i--;
    }
    tmp->next = NULL;
    if (putstr == true)
        ft_putendl_fd("rra", 1);
}

void    ft_pb(t_stack **stack_a, t_stack **stack_b, bool putstr)
{
    t_stack *tmp;

    if (!(*stack_a) || !(*stack_a)->next)
        return;
    tmp = *stack_a;
    *stack_a = (*stack_a)->next;
    tmp->next = NULL;
    ft_add_node_in_stack(stack_b, tmp);
    if (putstr == true)
        ft_putendl_fd("pb", 1);
}

void ft_pa(t_stack **stack_a, t_stack **stack_b, bool putstr)
{
    t_stack *tmp;

    if (!(*stack_b))
        return;
    tmp = *stack_b;
    *stack_b = (*stack_b)->next;
    tmp->next = *stack_a;
    *stack_a = tmp;
    if (putstr == true)
        ft_putendl_fd("pa", 1);
}