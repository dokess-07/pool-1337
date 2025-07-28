/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhayakk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 00:29:16 by akhayakk          #+#    #+#             */
/*   Updated: 2025/07/21 17:00:18 by akhayakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[size - i - 1];
		tab[size - i -1] = tab[i];
		tab[i] = temp ;
		i++;
	}
}
#include <stdio.h> 
int main(void)
{
	int i = 0;
	int size = 5;
	int T[] = {1, 2,3,4,5};	
	ft_rev_int_tab(T ,size);
	while (i < size)
	{
		printf("%d",T[i]);
		i++;
	}
	return(0);
}
