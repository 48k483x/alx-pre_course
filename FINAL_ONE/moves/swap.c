/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkabex <abkabex@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 03:48:49 by achahrou          #+#    #+#             */
/*   Updated: 2024/02/14 20:27:52 by abkabex          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_stack *a, int param)
{
	int	tmp;

	if (a && a->next)
	{
		tmp = a->data;
		a->data = a->next->data;
		a->next->data = tmp;
		if (!param)
			write(1, "sa\n", 3);
	}
}

void	sb(t_stack *b, int param)
{
	int	tmp;

	if (b && b->next)
	{
		tmp = b->data;
		b->data = b->next->data;
		b->next->data = tmp;
		if (!param)
			write(1, "sb\n", 3);
	}
}

void	ss(t_stack *a, t_stack *b, int param)
{
	sa(a, 0);
	sb(b, 0);
	if (!param)
		write(1, "ss\n", 3);
}