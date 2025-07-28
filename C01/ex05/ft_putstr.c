/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhayakk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 00:03:11 by akhayakk          #+#    #+#             */
/*   Updated: 2025/07/21 16:44:22 by akhayakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0 ;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}
#include <unistd.h>
int main(void)
{
	char str[] = "ruierufbovw684";
		ft_putstr(str);
	return(0);
}
