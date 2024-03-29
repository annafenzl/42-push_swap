/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 17:32:55 by afenzl            #+#    #+#             */
/*   Updated: 2022/07/05 13:26:18 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "libft/libs.h"

typedef struct s_lst
{
	int				data;
	int				simp;
	struct s_lst	*next;
}					t_lst;

typedef struct s_stacks
{
	t_lst	*stack_a;
	t_lst	*stack_b;

}			t_stacks;

void	print_list(t_lst *list_a, t_lst *list_b);
void	test_operators(t_stacks *stacks);

void	ft_error(t_stacks *stacks);
void	ft_free2(char **split);
void	check_input(char **input, t_stacks *stacks);
void	sort(t_stacks *stacks);
void	sort_small_stack(t_stacks *stacks);
void	sort_big_stack(t_stacks *stacks);
void	index_stack(t_stacks *stacks);

// linked lists
t_lst	*lst_new(int data, int simp);
t_lst	*go_trough_list(t_lst *list);
void	add_front(t_lst **lst, t_lst *new);
void	add_back(t_lst **lst, t_lst *new);
int		is_sorted(t_lst **root);
int		list_len(t_lst **root);
void	delete_one_node(t_lst **lst);
void	deallocate_list(t_lst **root);

// operations
void	sl(t_lst **root, char c);
void	ss(t_stacks *stacks);
void	rl(t_lst **root, char c);
void	rr(t_stacks *stacks);
void	rrl(t_lst **root, char c);
void	rrr(t_stacks *stacks);
void	pb(t_stacks *stacks);
void	pa(t_stacks *stacks);

// bonus
void	check_input_checker(char **input, t_stacks *stacks);
void	sl_bonus(t_lst **root);
void	ss_bonus(t_stacks *stacks);
void	rl_bonus(t_lst **root);
void	rr_bonus(t_stacks *stacks);
void	rrl_bonus(t_lst **root);
void	rrr_bonus(t_stacks *stacks);
void	pb_bonus(t_stacks *stacks);
void	pa_bonus(t_stacks *stacks);
#endif