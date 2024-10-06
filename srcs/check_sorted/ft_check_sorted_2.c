/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sorted_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmacau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:08:31 by fmacau            #+#    #+#             */
/*   Updated: 2024/10/05 15:08:32 by fmacau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

bool ft_check_sorted_2(char **av)
{
    int i;
    bool is_sorted;
    
    i = 1;
    is_sorted = true;
    while (av[i] != NULL)
    {
        if (ft_atoi_long(av[i]) < ft_atoi_long(av[i - 1]))
        {
            is_sorted = false;
            return (is_sorted);
        }
        i++;
    }
    return (is_sorted);
}