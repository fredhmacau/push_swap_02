/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_big_numbers.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmacau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 08:35:15 by fmacau            #+#    #+#             */
/*   Updated: 2024/10/13 08:35:16 by fmacau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void    ft_quick_sort(t_stack   **stack_a, int first, int last)
{
    if (last == 0)
        last = ft_lstsize((*stack_a)) - 1;
    if (first < last)
    {
        
    }
    
}

void ft_sort_big_numbers(t_stack **stack_a)
{
    int max_index;
    int min_index;
    int pivot;

    max_index = ft_max_index((*stack_a));
    min_index = ft_max_index((*stack_a));
    ft_quick_sort(stack_a,0, 0);
}
