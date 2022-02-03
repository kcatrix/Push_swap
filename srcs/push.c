/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:44:06 by kcatrix           #+#    #+#             */
/*   Updated: 2022/02/03 14:44:08 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	push_a(t_list **stack_a, t_list **stack_b)
{
	t_list	*ptr_a;
	t_list	*ptr_b;

	ptr_a = *stack_b;
	ptr_b = *stack_b;
	ptr_a = ptr_a->next;
	*stack_b = ptr_a;
	ptr_b->next = NULL;
	if (*stack_a)
		ft_lstadd_front(stack_a, ptr_b);
	*stack_a = ptr_b;
	ft_putstr("pa\n");
}

void	push_b(t_list **stack_a, t_list **stack_b)
{
	t_list	*ptr_a;
	t_list	*ptr_b;

	ptr_a = *stack_a;
	ptr_b = *stack_a;
	ptr_a = ptr_a->next;
	*stack_a = ptr_a;
	ptr_b->next = NULL;
	if (*stack_b)
		ft_lstadd_front(stack_b, ptr_b);
	*stack_b = ptr_b;
	ft_putstr("pb\n");
}
