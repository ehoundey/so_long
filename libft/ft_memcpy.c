/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehoundey <ehoundey@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 13:58:36 by ehoundey          #+#    #+#             */
/*   Updated: 2022/04/17 13:00:22 by ehoundey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The  ft_memcpy()  function  copies  n bytes from memory area src to memory
 * area dest.
 * The memory areas must not overlap.
 * Use ft_memmove if the memory areas do overlap.
 * RETURN: a pointer to dest
*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;

	if (n == 0 || dest == src)
		return (dest);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((const unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
