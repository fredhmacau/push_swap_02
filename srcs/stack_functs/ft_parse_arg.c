/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 21:29:23 by fmacau            #+#    #+#             */
/*   Updated: 2024/10/15 01:49:04 by fmacau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_parse_arg(t_stack **stack, int ac, char **av)
{
	
	int		i;
	int		value;
	int		index;
	t_stack	*new_node;
	char	**args;

	i = 0;
	value = 0;
	index = 0;
	if (ac == 2)
		args = ft_split(av[1], ' ');
	else
	{
		i = 1;
		args = av;
	}
	while (args[i])
	{	
		value = ft_atoi(args[i]);
		index = ft_create_index(value, args);
		new_node = ft_create_node(value, index);
		ft_add_node_in_stack(stack, new_node);
		i++;
	}
	if (ac == 2)
		ft_freestr(args);
}
