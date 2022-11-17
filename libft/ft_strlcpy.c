/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehoundey <ehoundey@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 13:58:36 by ehoundey          #+#    #+#             */
/*   Updated: 2022/04/17 13:02:05 by ehoundey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strlcpy() and ft_strlcat() take the full size of the destination buffer
 * and guarantee NUL-termination if there is room.
 * Note that room for the NUL should be included in dstsize.
 *
 * Returns the total length of the string it tried to create (length of src)
 *
 * If the return value is >= dstsize, the output string has been truncated.
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	length;

	if (!src)
		return (0);
	length = ft_strlen(src);
	if (dstsize == 0 || !dst)
		return (length);
	i = 0;
	while (src[i] && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	if (i < dstsize)
		dst[i] = '\0';
	return (length);
}
