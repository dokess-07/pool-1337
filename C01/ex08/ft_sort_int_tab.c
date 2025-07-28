/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhayakk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 02:21:08 by akhayakk          #+#    #+#             */
/*   Updated: 2025/07/18 02:22:44 by akhayakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < (size -1))
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = temp;
			i = 0;
		}
		i++;
	}
}
#include <stdio.h>
int main()
{
	int tab[] = {1, 5, 3, 4, 2, 6, 7, 8, 9, 10, 11, 12};
	int size = 12;

	int i = 0;
	ft_sort_int_tab(tab, size);
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}