/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_long.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmacau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 14:29:07 by fmacau            #+#    #+#             */
/*   Updated: 2024/10/05 14:29:08 by fmacau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int ft_atoi_long(char *str)
{
    int i;
    int sign;
    long long int res;
    long long int check_nbr;

    i = 0;
    sign = 1;
    res = 0;
    check_nbr = 0;

    while (str[i] < 32)
        i++;
    if (str[i] == '+' || str[i] == '-')
        if (str[i++] == '-')
            sign = -1;
    while (str[i] && ft_isdigit(str[i]))
    {
        res *= 10;
        res += (str[i] - 48) * sign;
        i++;
    }
    check_nbr = res;
    if (check_nbr > 2147483647 || check_nbr < -2147483648)
        ft_error();
    return (check_nbr);
}
