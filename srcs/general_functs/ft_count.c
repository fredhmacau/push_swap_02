/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmacau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 14:08:08 by fmacau            #+#    #+#             */
/*   Updated: 2024/10/05 14:08:11 by fmacau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int ft_count(char **arr, int nbr)
{
    int ocorrences;

    ocorrences = 0;
    while (*arr)
    {
        if (ft_atoi_long(*arr) == nbr)
            ocorrences++;
        arr++;
    }
    return (ocorrences);
}

