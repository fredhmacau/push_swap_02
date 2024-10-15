/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sorted_stack.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmacau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 01:21:34 by fmacau            #+#    #+#             */
/*   Updated: 2024/10/15 01:38:28 by fmacau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_is_sorted_stack(t_stack **stack)
{
	t_stack	*tmp;

	tmp = *stack;
	while (tmp && tmp->next)
	{
		printf("el:%ld\n", tmp->nbr);
		if (tmp->nbr > tmp->next->nbr)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
