/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sorted_1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmacau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:08:17 by fmacau            #+#    #+#             */
/*   Updated: 2024/10/05 15:08:20 by fmacau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

bool ft_check_sorted_1(char **av)
{
    int i;
    bool is_sorted;
    char    **tmp;
    
    i = 0;
    is_sorted = true;
    tmp = ft_split(av[1], ' ');
    if (tmp == NULL)
        return (true);
    while (tmp[i] != NULL)
    {
        if (i > 0 && ft_atoi_long(tmp[i]) < ft_atoi_long(tmp[i - 1]))
        {
            is_sorted = false;
            return (is_sorted);
        }
        i++;
    }
    free(tmp);
    return (is_sorted);
}