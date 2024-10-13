/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmacau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 19:29:00 by fmacau            #+#    #+#             */
/*   Updated: 2024/10/05 19:29:02 by fmacau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void    ft_free(t_stack **stack)
{
    t_stack *tmp;

    if (!stack)
        return; 
    while (*stack != NULL)
    {
        tmp = (*stack)->next;
        (*stack)->nbr = 0;
        free(*stack);
        (*stack) = tmp;
    }
}

void    ft_free_stack(t_stack *stack)
{
    t_stack *tmp;

    while (stack)
    {
        tmp = stack->next;
        free(stack);
        stack = tmp;
    }
}
