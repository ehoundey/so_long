/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehoundey <ehoundey@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 13:58:36 by ehoundey          #+#    #+#             */
/*   Updated: 2022/04/17 12:58:50 by ehoundey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The memccpy() function copies bytes from string src to string dst.
 * If the character c (as converted to an unsigned char) occurs in
 * the string src, the copy stops and a pointer to the byte after the copy of c
 * in the string dst is returned.
 * Otherwise, n bytes are copied, and a NULL pointer is returned.
 *
 * The source and destination strings should not overlap.
*/
void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	while (i < n && s[i] != (unsigned char)c)
	{
		d[i] = s[i];
		i++;
	}
	if (i < n && s[i] == (unsigned char)c)
	{
		d[i] = s[i];
		return (d + i + 1);
	}
	return (NULL);
}
