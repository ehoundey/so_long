/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehoundey <ehoundey@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 13:58:36 by ehoundey          #+#    #+#             */
/*   Updated: 2022/04/17 13:00:31 by ehoundey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The ft_memcmp() function compares the first n bytes
 * (each interpreted as unsigned char) of the memory areas s1 and s2.
 *
 * Returns an integer less than, equal to, or greater than zero
 * if the first n bytes of s1 is found, respectively, to be
 * less than, to match, or be greater than the first n bytes of s2.
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return ((int)(((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]));
		i++;
	}
	return (0);
}
