/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_lists.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 14:04:10 by afenzl            #+#    #+#             */
/*   Updated: 2022/07/04 15:06:26 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	print_list(t_lst *list_a, t_lst *list_b)
// {
// 	int		i;

// 	i = 0;
// 	ft_printf("INDEX\t\tA\tSimpA\t\tB\tSimpB\n");
// 	while (list_a != NULL)
// 	{
// 		ft_printf("%d\t\t", i);
// 		if (list_a != NULL)
// 		{
// 			ft_printf("%d\t%d\t\t", (list_a)->data, list_a->simp);
// 			list_a = (list_a)->next;
// 		}
// 		if (list_b != NULL)
// 		{
// 			ft_printf("%d\t%d", (list_b)->data, list_b->simp);
// 			list_b = (list_b)->next;
// 		}
// 		write(1, "\n", 1);
// 		i++;
// 	}
// 	while (list_b != NULL)
// 	{
// 		ft_printf("%d \t\t \t \t\t%d\t%d\n", i, (list_b)->data, list_b->simp);
// 		i++;
// 		list_b = (list_b)->next;
// 	}
// }

// void	test_operators(t_stacks *stacks)
// {
// 	print_list(stacks->stack_a, stacks->stack_b);
// 	printf("==============================================================\n");
// 	pa(stacks);
// 	pa(stacks);
// 	pa(stacks);
// 	print_list(stacks->stack_a, stacks->stack_b);
// 	printf("==============================================================\n");
// 	rrl(&stacks->stack_a, 'a');
// 	print_list(stacks->stack_a, stacks->stack_b);
// 	printf("==============================================================\n");
// 	rl(&stacks->stack_a, 'a');
// 	print_list(stacks->stack_a, stacks->stack_b);
// }

// void	read_list(t_lst **root)
// {
// 	int		i;
// 	t_lst	*cur;

// 	i = 0;
// 	cur = *root;
// 	ft_printf("hey, thats in the list:\n");
// 	while (root != NULL && cur != NULL)
// 	{
// 		ft_printf("%i| ---> %i\n", i, cur->data);
// 		cur = cur->next;
// 		i++;
// 	}
// }