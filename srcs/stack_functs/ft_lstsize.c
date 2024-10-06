/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmacau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 21:16:23 by fmacau            #+#    #+#             */
/*   Updated: 2024/10/05 21:16:24 by fmacau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int ft_lstsize(t_stack *stack)
{
    int len;

    len = 0;
    while (stack->next != NULL)
    {
       stack = stack->next;
       len++;      
    }
    return (len);
}
