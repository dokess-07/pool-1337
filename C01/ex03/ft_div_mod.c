/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhayakk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 21:22:09 by akhayakk          #+#    #+#             */
/*   Updated: 2025/07/21 16:37:54 by akhayakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
#include <stdio.h>
int main(void)
{
	int i = 2;
	int j = 3;
	int div;
	int mod;
	ft_div_mod(i,j,&mod,&div);
	printf("%d %d",div,mod);
return (0);
}
