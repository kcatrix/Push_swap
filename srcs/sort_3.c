/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:44:45 by kcatrix           #+#    #+#             */
/*   Updated: 2022/02/03 14:44:47 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	sort_3(t_list **stack)
{
	if (*stack && (*stack)->next && (*stack)->next->next)
		sort_3_part_1(stack);
	return ;
}

void	sort_3_part_1(t_list **stack)
{
	if ((*stack)->content > (*stack)->next->content
		&& (*stack)->next->content < (*stack)->next->next->content
		&& (*stack)->next->next->content > (*stack)->content)
	{
		swap_a(stack);
		return ;
	}
	if ((*stack)->content < (*stack)->next->content
		&& (*stack)->next->content > (*stack)->next->next->content
		&& (*stack)->next->next->content < (*stack)->content)
	{
		reverse_rotate_a(stack);
		return ;
	}
	sort_3_part_2(stack);
	return ;
}

void	sort_3_part_2(t_list **stack)
{
	if ((*stack)->content > (*stack)->next->content
		&& (*stack)->next->content > (*stack)->next->next->content
		&& (*stack)->next->next->content < (*stack)->content)
	{
		swap_a(stack);
		reverse_rotate_a(stack);
		return ;
	}
	if ((*stack)->content > (*stack)->next->content
		&& (*stack)->next->content < (*stack)->next->next->content
		&& (*stack)->next->next->content < (*stack)->content)
	{
		rotate_a(stack);
		return ;
	}
	if ((*stack)->content < (*stack)->next->content
		&& (*stack)->next->content > (*stack)->next->next->content
		&& (*stack)->next->next->content > (*stack)->content)
	{
		reverse_rotate_a(stack);
		swap_a(stack);
		return ;
	}
	return ;
}
