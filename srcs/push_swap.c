/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:43:54 by kcatrix           #+#    #+#             */
/*   Updated: 2022/02/03 14:43:56 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	push_swap(t_list **stack_a, t_list **stack_b)
{
	if (count_lst(*stack_a) <= 5)
		parse_until_5(stack_a, stack_b);
	else
		parse_after_5(stack_a, stack_b);
	return ;
}
