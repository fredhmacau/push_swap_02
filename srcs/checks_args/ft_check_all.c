/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_all.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmacau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 00:42:16 by fmacau            #+#    #+#             */
/*   Updated: 2024/10/15 01:42:57 by fmacau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static int	ft_contains(int num, char **av, int i)
{
	i++;
	while (av[i])
	{
		if (ft_atoi(av[i]) == num)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_isnum(char *num)
{
	int	i;

	i = 0;
	if (num[0] == '-')
		i++;
	while (num[i])
	{
		if (!ft_isdigit(num[i]))
			return (0);
		i++;
	}
	return (1);
}

void	ft_check_all(int ac, char **av)
{
	int		i;
	long	tmp;
	char	**avs;

	i = 0;
	if (ac == 2)
		avs = ft_split(av[1], ' ');
	else
	{
		i = 1;
		avs = av;
	}
	while (avs[i])
	{
		tmp = ft_atoi(avs[i]);
		if (!ft_isnum(avs[i]))
			ft_error();
		if (ft_contains(tmp, avs, i))
			ft_error();
		if (tmp < -2147483648 || tmp > 2147483647)
			ft_error();
		i++;
	}
	if (ac == 2)
		ft_freestr(avs);
}
