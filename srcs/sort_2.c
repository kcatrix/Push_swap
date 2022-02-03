/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:44:38 by kcatrix           #+#    #+#             */
/*   Updated: 2022/02/03 14:44:39 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	sort_2(t_list **stack)
{
	if ((*stack) && (*stack)->next
		&& (*stack)->content > (*stack)->next->content)
	{
		rotate_a(stack);
		return ;
	}
	return ;
}
