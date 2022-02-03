/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:44:13 by kcatrix           #+#    #+#             */
/*   Updated: 2022/02/03 14:44:15 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	reverse_rotate_a(t_list **stack_a)
{
	t_list	*ptr;

	if (!(*stack_a) || !(*stack_a)->next)
		return ;
	ptr = *stack_a;
	while (ptr->next->next)
		ptr = ptr->next;
	ptr->next->next = *stack_a;
	*stack_a = ptr->next;
	ptr->next = NULL;
	ft_putstr("rra\n");
}

void	reverse_rotate_b(t_list **stack_b)
{
	t_list	*ptr;

	ptr = *stack_b;
	if (!(*stack_b) || !(*stack_b)->next)
		return ;
	while (ptr->next->next)
		ptr = ptr->next;
	ptr->next->next = *stack_b;
	*stack_b = ptr->next;
	ptr->next = NULL;
	ft_putstr("rrb\n");
}

void	reverse_rotate_rotate(t_list **stack_a, t_list **stack_b)
{
	t_list	*ptr;

	if (!(*stack_a) || !(*stack_a)->next)
		return ;
	ptr = *stack_a;
	while (ptr->next->next)
		ptr = ptr->next;
	ptr->next->next = *stack_a;
	*stack_a = ptr->next;
	ptr->next = NULL;
	reverse_rotate_rotate_end(stack_b);
	ft_putstr("rrr\n");
}

void	reverse_rotate_rotate_end(t_list **stack_b)
{
	t_list	*ptr;

	ptr = *stack_b;
	if (!(*stack_b) || !(*stack_b)->next)
		return ;
	while (ptr->next->next)
		ptr = ptr->next;
	ptr->next->next = *stack_b;
	*stack_b = ptr->next;
	ptr->next = NULL;
}
