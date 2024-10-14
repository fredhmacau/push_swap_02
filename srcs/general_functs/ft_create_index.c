/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_index.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmacau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 10:29:17 by fmacau            #+#    #+#             */
/*   Updated: 2024/10/14 09:42:56 by fmacau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_create_index(int i, char **av)
{
	int	j;
	int	index;

	j = 1;
	index = 0;
	while (av[j])
	{
		if (ft_atoi_long(av[j]) < i)
			index++;
		j++;
	}
	return (index);
}
