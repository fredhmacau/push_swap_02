/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmacau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 02:03:36 by fmacau            #+#    #+#             */
/*   Updated: 2024/10/13 02:03:37 by fmacau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int ft_min_index(t_stack *stack)
{
    int tmp;

    tmp = stack->index;
    while (stack->next != NULL)
    {
        if (tmp > stack->next->index)
            tmp = stack->next->index;
        stack = stack->next;
    }
    return (tmp);
}
