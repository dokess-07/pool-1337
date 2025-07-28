/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhayakk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 17:06:52 by akhayakk          #+#    #+#             */
/*   Updated: 2025/07/26 17:47:07 by akhayakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_base16(unsigned char j)
{
	char	*c;

	c = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(c[j / 16]);
	ft_putchar(c[j % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			ft_putchar(str[i]);
		else
			ft_base16(str[i]);
		i++;
	}
}
