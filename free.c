/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 13:08:22 by afenzl            #+#    #+#             */
/*   Updated: 2022/10/21 16:41:10 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free2(char **split)
{
	int	i;

	i = 0;
	while (split[i] != NULL)
	{
		free(split[i]);
		i++;
	}
	free(split);
}

void	deallocate_list(t_lst **root)
{
	t_lst	*cur;
	t_lst	*prev;

	if (root && *root)
	{
		cur = *root;
		while (cur != NULL)
		{
			prev = cur;
			cur = cur->next;
			free(prev);
		}
		*root = NULL;
	}
}
