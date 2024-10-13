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
        if (av[i][0] == '-' || av[i][0] == '+')
            j++;
        while (av[i][j])
        {
            if (!ft_isdigit(av[i][j]))
                return (false);
            j++;
        }
        j = 0;
        i++; 
    }
    return (true);
}