/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehoundey <ehoundey@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 13:58:36 by ehoundey          #+#    #+#             */
/*   Updated: 2022/04/17 13:02:01 by ehoundey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strlcpy() and ft_strlcat() take the full size of the destination buffer and
 * guarantee NUL-termination if there is room.
 * Note that room for the NUL should be included in dstsize.
 *
 * Returns the total length of the string it tried to create
 * (the initial length of dst plus the length of src).
 *
 * If the return value is >= dstsize, the output string has been truncated.
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_length;
	size_t	dst_length;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	src_length = ft_strlen(src);
	while (dst[i] && i < dstsize)
		i++;
	dst_length = i;
	while (i + 1 < dstsize && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (i < dstsize)
		dst[i] = 0;
	return (dst_length + src_length);
}
