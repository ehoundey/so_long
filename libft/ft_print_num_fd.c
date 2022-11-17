/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehoundey <ehoundey@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 13:58:36 by ehoundey          #+#    #+#             */
/*   Updated: 2022/04/17 13:00:55 by ehoundey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	write_num(int fd, long num)
{
	long	div;
	int		ret;
	char	c;

	div = 1;
	ret = 0;
	while ((num / div) > 9)
		div *= 10;
	while (div >= 1)
	{
		c = (num / div) + '0';
		ret += write(fd, &c, 1);
		num = num % div;
		div /= 10;
	}
	return (ret);
}

/**
 * Print a signed int.
 * RETURN:
 * Number of characters printed.
 */

int	ft_print_num_fd(int fd, int nbr)
{
	long	num;
	int		ret;

	num = (long)nbr;
	ret = 0;
	if (num < 0)
	{
		ret += write(fd, "-", 1);
		num *= -1;
	}
	if (num == 0)
		ret += write(fd, "0", 1);
	else
		ret += write_num(fd, num);
	return (ret);
}
