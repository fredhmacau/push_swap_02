/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmacau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 12:05:47 by fmacau            #+#    #+#             */
/*   Updated: 2024/10/05 12:05:49 by fmacau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "../libft/libft.h"
#include <stdbool.h>

typedef struct s_stack
{
    long int nbr;
    int index;
    struct s_stack *prev;
    struct s_stack *next;
} t_stack;

int ft_count(char **arr, int nbr);
int ft_atoi_long(char *str);
int ft_lstsize(t_stack *stack);
int ft_create_index(int i, char **av);
int ft_create_index_sub(int i, char **av);
int ft_max_index(t_stack *stack);
int ft_min_index(t_stack *stack);
int ft_sub_pa(t_stack **stack_a, t_stack **stack_b);
int ft_sub_pb(t_stack **stack_a, t_stack **stack_b);
int ft_sub_ra(t_stack **stack_a);
int ft_sub_rb(t_stack **stack_b);
bool ft_check_sorted_stack(t_stack **stack);
bool ft_check_only_arg(char **av);
bool ft_check_any_arg(char **av);
bool ft_check_sorted_1(char **av);
bool ft_check_sorted_2(char **av);
t_stack *ft_create_node(int nbr, int index);
t_stack *ft_create_node(int nbr, int index);
t_stack *ft_lstnode(t_stack *node);
t_stack *ft_first_node(t_stack *node);
t_stack *ft_parse_sub_arg(char **av);
t_stack *ft_parse_arg(int ac, char **av);
void ft_sort(t_stack **stack_a);
void ft_add_node_in_stack(t_stack **stack, t_stack *new_node);
void ft_error(void);
void ft_free_stack(t_stack *stack);
void ft_free(t_stack **stack);
void ft_rra(t_stack **stack_a, bool putstr);
void ft_sa(t_stack **stack_node_a, bool putstr);
void ft_ra(t_stack **stack_a, bool putstr);
void ft_rb(t_stack **stack_b, bool putstr);
void ft_pb(t_stack **stack_a, t_stack **stack_b, bool putstr);
void ft_pa(t_stack **stack_a, t_stack **stack_b, bool putstr);
void ft_sort_till_3(t_stack **stack_a);
void ft_sort_till_4(t_stack **stack_a);
void ft_sort_till_5(t_stack **stack_a);
void ft_sort_big_numbers(t_stack **stack_a);
void ft_rrb(t_stack **stack_b, bool putstr);
#endif