/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utilities_2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:45:17 by kcatrix           #+#    #+#             */
/*   Updated: 2022/02/03 14:45:19 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	last_pos(t_list **stack_a)
{
	t_list	*ptr1;

	ptr1 = *stack_a;
	while (ptr1->next)
		ptr1 = ptr1->next;
	return (ptr1->content);
}

int	last_pos_tag(t_list **stack_a)
{
	t_list	*ptr1;

	ptr1 = *stack_a;
	while (ptr1->next)
		ptr1 = ptr1->next;
	return (ptr1->tag);
}

void	end_sorting(t_list **stack_a)
{
	int	min_pos_a;

	min_pos_a = min_max(stack_a, min);
	while ((*stack_a)->tag != min_pos_a
		&& check_all_good(stack_a) == 0)
		reverse_rotate_a(stack_a);
	return ;
}

void	end_sorting_5(t_list **stack_a)
{
	int	min_pos_a;

	min_pos_a = min_max(stack_a, min);
	while ((*stack_a)->tag != min_pos_a
		&& check_all_good(stack_a) == 0)
	{
		if ((*stack_a)->content > (*stack_a)->next->content)
			swap_a(stack_a);
		reverse_rotate_a(stack_a);
	}
	return ;
}
