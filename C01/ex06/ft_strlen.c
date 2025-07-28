/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhayakk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 00:20:12 by akhayakk          #+#    #+#             */
/*   Updated: 2025/07/21 16:48:25 by akhayakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str [i])
	{
		i++;
	}
	return (i);
}
#include <stdio.h>
int main(void)
{
	char str[] = "Abderrahmane khayakkoute";
	int i = ft_strlen(str);
	printf("%d" ,i);
return (0);
}
