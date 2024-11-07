/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuzan <tuzan@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:12:15 by tuzan             #+#    #+#             */
/*   Updated: 2024/11/06 17:12:15 by tuzan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putint(int n)
{
	char	c;
	int		len;
	int		temp;

	len = 0;
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	if (n < 0)
	{
		if (write(1, "-", 1) == -1)
			return (-1);
		n = -n;
		len++;
	}
	if (n >= 10)
	{
		temp = ft_putint(n / 10);
		if (temp == -1)
			return (-1);
		len += temp;
	}
	c = '0' + (n % 10);
	if (write(1, &c, 1) == -1)
		return (-1);
	return (len + 1);
}

int	ft_putuint(unsigned int n)
{
	char	c;
	int		len;
	int		temp;

	len = 0;
	if (n >= 10)
	{
		temp = ft_putuint(n / 10);
		if (temp == -1)
			return (-1);
		len += temp;
	}
	c = '0' + (n % 10);
	if (write(1, &c, 1) == -1)
		return (-1);
	return (len + 1);
}
