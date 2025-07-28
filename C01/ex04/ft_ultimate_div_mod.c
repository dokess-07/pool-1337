/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhayakk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 23:51:50 by akhayakk          #+#    #+#             */
/*   Updated: 2025/07/21 16:40:53 by akhayakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b ;
	mod = *a % *b ;
	*a = div;
	*b = mod;
}
#include <stdio.h>
int main (void)
{
	int i = 1;
	int j = 3;
	ft_ultimate_div_mod(&i,&j);
	printf("%d %d" ,i,j);
	return(0);
}
