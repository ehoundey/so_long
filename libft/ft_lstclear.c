/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehoundey <ehoundey@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 13:58:36 by ehoundey          #+#    #+#             */
/*   Updated: 2022/04/17 12:57:16 by ehoundey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/**
 * Deletes and frees the given element and every successor of that element,
 * using the function ’del’ and free(3). Finally, the pointer to the list must
 * be set to NULL.
*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	temp = *lst;
	while (temp)
	{
		del((*lst)->content);
		temp = (*lst)->next;
		free(*lst);
		*lst = temp;
	}
	*lst = NULL;
}
