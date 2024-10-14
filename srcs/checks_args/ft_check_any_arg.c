/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_any_arg.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmacau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 14:50:21 by fmacau            #+#    #+#             */
/*   Updated: 2024/10/14 11:52:53 by fmacau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

char	*ft_semi_process(int ac, char **av)
{
	char	*str;
	size_t	len;
	int		i;

	i = 1;
	len = 0;
	str = malloc(ac * 100);
	if (!str)
		return (NULL);
	while (i < ac)
	{
		len += ft_strlcat(str + len, av[i], ac * 100 - len);
		len += ft_strlcat(str + len, " ", ac * 100 - len);
		i++;
	}
	return (str);
}

bool	ft_check_dup_and_chr(char **tmp, char chr, char *s)
{
	if (!ft_isdigit(chr))
		return (false);
	if (ft_count(tmp, ft_atoi_long(s)) > 1)
		return (false);
	return (true);
}

bool	ft_check_any_arg(int ac, char **av)
{
	char	**tmp;
	char	*str;
	int		i;
	int		j;

	j = 0;
	str = ft_semi_process(ac, av);
	tmp = ft_split(str, ' ');
	i = 0;
	free (str);
	while (tmp[i])
	{
		if (tmp[i][0] == '-' || tmp[i][0] == '+')
			j++;
		while (tmp[i][j])
		{
			if (!ft_check_dup_and_chr(tmp, tmp[i][j], tmp[i]))
				return (false);
			j++;
		}
		j = 0;
		i++;
	}
	free(tmp);
	return (true);
}
