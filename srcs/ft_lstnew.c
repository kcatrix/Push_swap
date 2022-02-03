/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:42:13 by kcatrix           #+#    #+#             */
/*   Updated: 2022/02/03 14:42:15 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../includes/libft.h"

t_list	*ft_lstnew(int content, int tag)
{
	t_list	*ptr;

	ptr = malloc(sizeof(t_list));
	if (ptr)
	{
		ptr->next = NULL;
		ptr->content = content;
		ptr->tag = tag;
	}
	return (ptr);
}
