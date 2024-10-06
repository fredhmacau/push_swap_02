/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_only_arg.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmacau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 14:50:07 by fmacau            #+#    #+#             */
/*   Updated: 2024/10/05 14:50:09 by fmacau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

bool ft_check_only_arg(char **av)
{
    char **tmp;
    int     i;
    int     j;

    i = 0;
    j = 0;
    tmp = ft_split(av[1], ' ');
    if (tmp == NULL)
        return (false);
    while (tmp[i])
    {
        while (tmp[i][j])
        {
            if (!ft_strchr("0123456789", tmp[i][j]) ||
                ft_count(tmp, ft_atoi_long(tmp[i])) > 1)
                return (false);
            j++;
        }
        j = 0;
        i++; 
    }
    free(tmp);
    return (true);
}