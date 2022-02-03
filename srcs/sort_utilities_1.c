/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utilities_1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:45:10 by kcatrix           #+#    #+#             */
/*   Updated: 2022/02/03 14:45:11 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	min_max(t_list **stack_a, t_num extrem)
{
	t_list	*ptr1;
	int		pos;
	int		save;

	ptr1 = *stack_a;
	save = ptr1->content;
	pos = ptr1->tag;
	while (ptr1)
	{
		if ((extrem == min && save > ptr1->content)
			|| (extrem == max && save < ptr1->content))
		{
			pos = ptr1->tag;
			save = ptr1->content;
		}
		ptr1 = ptr1->next;
	}
	return (pos);
}

int	min_max_index(t_list *stack_a, t_num extrem)
{
	int	pos;
	int	save;
	int	index;
	int	next;

	save = stack_a->content;
	pos = 1;
	index = 1;
	while (stack_a)
	{
		if (stack_a->next)
		{
			next = stack_a->next->content;
			if ((extrem == min && save > next)
				|| (extrem == max && save < next))
			{
				save = next;
				index = pos + 1;
			}
		}
		stack_a = stack_a->next;
		pos++;
	}
	return (index);
}

int	min_max_content(t_list **stack_a, t_num extrem)
{
	t_list	*ptr1;
	int		save;

	ptr1 = *stack_a;
	save = ptr1->content;
	while (ptr1)
	{
		if ((extrem == min && save > ptr1->content)
			|| (extrem == max && save < ptr1->content))
			save = ptr1->content;
		ptr1 = ptr1->next;
	}
	return (save);
}

int	group_min(t_list **stack_a)
{
	t_list	*ptr;
	int		i;

	ptr = *stack_a;
	i = min_max_index(ptr, min) - 1;
	while (i > 0)
	{
		ptr = ptr->next;
		i--;
	}
	return (ptr->content);
}
