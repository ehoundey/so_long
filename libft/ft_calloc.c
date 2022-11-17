/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehoundey <ehoundey@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 13:58:36 by ehoundey          #+#    #+#             */
/*   Updated: 2022/04/17 12:56:20 by ehoundey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The ft_calloc() function contiguously allocates enough space for count
 * objects that are size bytes of memory each and returns a pointer to the
 * allocated memory.  The allocated memory is filled with bytes of value zero.
*/
void	*ft_calloc(size_t count, size_t size)
{
	void	*ret;

	if (size > 0)
		if (count > (((size_t)(-1)) / size))
			return (NULL);
	ret = malloc(count * size);
	if (!ret)
		return (NULL);
	ft_bzero(ret, count * size);
	return (ret);
}
