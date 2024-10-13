/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sorted_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmacau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 14:53:39 by fmacau            #+#    #+#             */
/*   Updated: 2024/10/12 14:53:41 by fmacau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

bool    ft_check_sorted_a(t_stack **stack_a)
{
    int nbr;

    nbr = (*stack_a)->nbr;
    while ((*stack_a)->next != NULL)
    {
        if (nbr > (*stack_a)->next->nbr)
            return (false);
        nbr = (*stack_a)->next->nbr;
        (*stack_a) = (*stack_a)->next;
    }
    return (true);
}