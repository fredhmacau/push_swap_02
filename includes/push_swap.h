/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmacau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 12:05:47 by fmacau            #+#    #+#             */
/*   Updated: 2024/10/15 07:41:18 by fmacau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"
# include <stdbool.h>

typedef struct s_stack
{
	long			nbr;
	int				index;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

int		ft_lstsize(t_stack *stack);
int		ft_get_min(t_stack **stack, int val);
int		ft_get_distance(t_stack **stack, int index);
int		push(t_stack **stack_to, t_stack **stack_from);
int		ft_sub_pa(t_stack **stack_a, t_stack **stack_b);
int		ft_sub_pb(t_stack **stack_a, t_stack **stack_b);
int		ft_sub_ra(t_stack **stack_a);
int		ft_sub_rb(t_stack **stack_b);
int		is_sorted(t_stack **stack);
int		ft_sub_sa(t_stack **stack_a);
int		ft_sub_rra(t_stack **stack_a);
t_stack	*ft_create_node(int nbr);
t_stack	*ft_lstnode(t_stack *node);
t_stack	*ft_first_node(t_stack *node);
void	ft_sort(t_stack **stack_a, t_stack **stack_b);
void	ft_add_node_in_stack(t_stack **stack, t_stack *new_node);
void	ft_error(void);
void	ft_free(char **str);
void	free_stack(t_stack **stack);
void	ft_sort_till_3(t_stack **stack_a);
void	ft_sort_till_4(t_stack **stack_a, t_stack **stack_b);
void	ft_sort_till_5(t_stack **stack_a, t_stack **stack_b);
void	ft_sort_big_numbers(t_stack **stack_a, t_stack **stack_b);
void	ft_check_args(int argc, char **argv);
void	ft_rrb(t_stack **stack_b, bool putstr);
void	ft_index_stack(t_stack **stack);
#endif
