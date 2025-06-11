/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juribeir <juribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 16:30:44 by juribeir          #+#    #+#             */
/*   Updated: 2025/06/11 10:44:53 by juribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "/libft/libft.h"
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
}	t_node;

long long	*verify_arguments(int ac, char **av, int *count);
t_node		*ft_create_node(int value);
void		ft_add_first(t_node **head, int value);
void		ft_add_last(t_node **head, int value);
void		ft_remove_first(t_node **head);
void		ft_remove_last(t_node **head);
void		sa(t_node **a);
void		sb(t_node **b);
void		ss(t_node **a, t_node **b);
void		pa(t_node **a, t_node **b);
void		pb(t_node **a, t_node **b);
void		ra(t_node **a);
void		rb(t_node **b);
void		rr(t_node **a, t_node **b);
void		rra(t_node **a);
void		rrb(t_node **b);
void		rrr(t_node **a, t_node **b);
void		free_resources(char **numbers,
				long long *numbers_list, t_node **stack);
void		free_splited(char **numbers);
void		assign_indexes(t_node *stack);
void		radix_sort(t_node **a, t_node **b);
void		free_stack(t_node **stack);
void		sort_three(t_node **a);
void		swap(t_node **stack);
void		reverse_rotate(t_node **stack);
void		rotate(t_node **stack);
int			stack_size(t_node *stack);
int			get_min_index(t_node *stack);

#endif
