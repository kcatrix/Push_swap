/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_all_good.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:40:01 by kcatrix           #+#    #+#             */
/*   Updated: 2022/02/03 14:40:03 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	check_all_good(t_list **stack_a)
{
	t_list	*ptr;

	ptr = *stack_a;
	while (ptr->next)
	{
		if (ptr->content > ptr->next->content)
			return (0);
		ptr = ptr->next;
	}
	return (1);
}

int	check_all_good_b(t_list **stack_b)
{
	t_list	*ptr;

	ptr = *stack_b;
	while (ptr->next)
	{
		if (ptr->content < ptr->next->content)
			return (0);
		ptr = ptr->next;
	}
	return (1);
}
