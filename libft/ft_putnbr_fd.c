/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehoundey <ehoundey@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 13:58:36 by ehoundey          #+#    #+#             */
/*   Updated: 2022/04/17 13:01:36 by ehoundey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Outputs the integer ’n’ to the given file descriptor.
*/
void	ft_putnbr_fd(int n, int fd)
{
	int		div;
	long	num;
	char	c;

	num = n;
	div = 1000000000;
	if (num < 0)
	{
		write(fd, "-", 1);
		num = num * (-1);
	}
	if (num == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	while ((num / div) == 0 && div > 1)
		div /= 10;
	while (div >= 1)
	{
		c = (num / div) + '0';
		write(fd, &c, 1);
		num = num % div;
		div /= 10;
	}
}
