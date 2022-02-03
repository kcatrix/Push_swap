/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   securities.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:44:25 by kcatrix           #+#    #+#             */
/*   Updated: 2022/02/03 14:44:27 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	check_bit(t_list **stack_a, char **argv, int i)
{
	while (*argv)
		ft_lstadd_back(stack_a, ft_lstnew(ft_atoi(*argv++), i++));
	if (!check_duplicate(*stack_a))
		return (0);
	return (1);
}

int	check_duplicate(t_list *stack_a)
{
	t_list	*ptr;

	while (stack_a)
	{
		ptr = stack_a->next;
		while (ptr)
		{
			if (ptr->content == stack_a->content)
				return (0);
			ptr = ptr->next;
		}
		stack_a = stack_a->next;
	}
	return (1);
}
