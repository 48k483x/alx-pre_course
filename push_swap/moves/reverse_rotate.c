/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 03:41:34 by achahrou          #+#    #+#             */
/*   Updated: 2024/02/14 03:45:39 by achahrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstadd_front(stack **ab, stack *new)
{
	if (!ab || !new)
		return ;
	new->next = *ab;
	*ab = new;
}

void	rra(stack **a)
{
	stack	*current;
	stack	*last;
	stack	*prev;

	if (!(*a) || !(*a)->next)
		return ;
	current = *a;
	prev = NULL;
	while (current->next != NULL)
	{
		prev = current;
		current = current->next;
	}
	last = current;
	prev->next = NULL;
	last->next = *a;
	*a = last;
	write(1, "rra\n", 4);
}

void	rrb(stack **b)
{
	stack	*last;
	stack	*current;

	current = *b;
	if (!(*b) || !(*b)->next)
		return ;
	while (current->next->next != NULL)
		current = current->next;
	last = current->next;
	current->next = NULL;
	last->next = *b;
	*b = last;
	write(1, "rrb\n", 4);
}

void	rrr(stack **a, stack **b)
{
	rra(a);
	rrb(b);
	write(1, "rrr\n", 4);
}
