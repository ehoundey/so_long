/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehoundey <ehoundey@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 13:58:36 by ehoundey          #+#    #+#             */
/*   Updated: 2022/04/17 13:02:40 by ehoundey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The strrchr() function locates the LAST occurrence of c (converted to char)
 * in the string pointed to by s.  The terminating nul character is considered
 * to be part of the string;
 * therefore if c is `\0', the function locates the terminating `\0'.
*/
char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s) + 1;
	while (i-- > 0)
		if (s[i] == (char)c)
			return ((char *)(s + i));
	return (NULL);
}
