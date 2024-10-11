/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmacau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 18:32:54 by fmacau            #+#    #+#             */
/*   Updated: 2024/10/11 18:34:45 by fmacau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int    ft_max_index(t_stack *stack)
{
    int tmp;

    tmp = stack->index;
    while (stack->next != NULL)
    {
        if (tmp < stack->next->index)
            tmp = stack->next->index;
        stack = stack->next;
    }
    return (tmp);
}
