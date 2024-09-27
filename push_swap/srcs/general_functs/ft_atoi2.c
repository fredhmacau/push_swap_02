/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmacau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 20:13:05 by fmacau            #+#    #+#             */
/*   Updated: 2024/09/27 20:13:07 by fmacau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int ft_atoi2(char *str)
{
    int sign;
    int res;
    long long i;
    int check_nbr;

    sign = 1;
    res = 0;
    i = 0;
    while(str[i] < 32)
        i++;
    if (str[i] == '+' || str[i] == '-')
        if (str[i] == '-')
            sign = -1;
    while (str[i] && (str[i] >= '0' && str[i] <= '9'))
    {
        res *= 10;
        res += str[i] - 48;
        i++; 
    }
    check_nbr = res * i;
    if (check_nbr > 2147483647 || check_nbr < -2147483648)
        ft_error();
    return (check_nbr);

}