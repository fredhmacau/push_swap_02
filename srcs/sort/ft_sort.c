/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmacau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 16:06:47 by fmacau            #+#    #+#             */
/*   Updated: 2024/10/05 16:06:48 by fmacau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void    ft_sort(t_stack **stack_a)
{
    if (!stack_a)
        return;
    if (ft_lstsize(*stack_a) == 1)
        exit(1);
    if (ft_lstsize(*stack_a) == 2)
        ft_sa(stack_a, true);
}
