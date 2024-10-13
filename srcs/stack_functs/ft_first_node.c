/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_node.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmacau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 19:18:42 by fmacau            #+#    #+#             */
/*   Updated: 2024/10/13 19:18:44 by fmacau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack *ft_first_node(t_stack *node)
{
    t_stack *tmp;
    
    if (!node)
        return (NULL);
    tmp = node;
    while (tmp->prev)
        tmp = tmp->prev;
    return (tmp);
}