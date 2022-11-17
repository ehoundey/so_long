/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unum_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehoundey <ehoundey@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 13:58:36 by ehoundey          #+#    #+#             */
/*   Updated: 2022/04/17 13:01:03 by ehoundey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Print an unsigned number using provided digits (e.g. "0123456789").
 * If truncate is true the number will be truncated to an unsigned int.
 * RETURN:
 * Number of characters printed.
 */

int	ft_print_unum_fd(int fd, unsigned long num, char *digits, int truncate)
{
	unsigned long	div;
	int				ret;
	int				base;

	if (truncate)
		num = (unsigned long)((unsigned int)(num));
	ret = 0;
	div = 1;
	base = ft_strlen(digits);
	while ((num / div) > (unsigned long)(base - 1))
		div *= base;
	if (num == 0)
		ret += write(fd, &digits[0], 1);
	else
	{
		while (div >= 1)
		{
			ret += write(fd, &digits[(num / div)], 1);
			num = num % div;
			div /= base;
		}
	}
	return (ret);
}
