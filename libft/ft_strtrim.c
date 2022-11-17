/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehoundey <ehoundey@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 13:58:36 by ehoundey          #+#    #+#             */
/*   Updated: 2022/04/17 13:02:45 by ehoundey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Allocates (with malloc(3)) and returns a copy of ’s1’
 * with the characters specified in ’set’ removed from
 * the beginning and the end of the string.
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*ret;

	if (!s1)
		return (NULL);
	while (ft_strchr(set, *s1) && *s1)
		s1++;
	if (*s1 == 0)
		return (ft_strdup(""));
	i = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]))
		i--;
	ret = (char *)malloc(i + 2);
	if (!ret)
		return (NULL);
	j = 0;
	while (j < i + 1)
	{
		ret[j] = s1[j];
		j++;
	}
	ret[j] = '\0';
	return (ret);
}
