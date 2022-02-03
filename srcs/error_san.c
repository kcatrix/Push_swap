/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_san.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:40:42 by kcatrix           #+#    #+#             */
/*   Updated: 2022/02/03 14:40:44 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	error_san_atoi(void)
{
	write(2, "Error\n", 7);
	exit(0);
	return ;
}

void	error_san(t_list **stack_a, char **cpy_argv)
{
	ft_lstclear(stack_a);
	free_split(cpy_argv);
	write(2, "Error\n", 7);
	exit(0);
	return ;
}
