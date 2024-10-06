/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_any_arg.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmacau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 14:50:21 by fmacau            #+#    #+#             */
/*   Updated: 2024/10/05 14:50:23 by fmacau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

bool ft_check_any_arg(char **av)
{
    int     i;
    int     j;

    i = 1;
    j = 0;
    while (av[i])
    {
        while (av[i][j])
        {
            if (!ft_strchr("0123456789", av[i][j]) ||
                ft_count(av, ft_atoi_long(av[i])) > 1)
                return (false);
            j++;
        }
        j = 0;
        i++; 
    }
    return (true);
}