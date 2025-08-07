/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhayakk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 11:25:18 by akhayakk          #+#    #+#             */
/*   Updated: 2025/08/03 14:18:25 by akhayakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*tab;
	int	i;

	size = max - min;
	tab = (int *)malloc(size * sizeof(int));
	if (max <= min)
		return (NULL);
	i = 0;
	while (i <= size)
	{
		tab[i] = (min + i);
		i++;
	}
	return (tab);
}
/*#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max);

int main(void)
{
    int *range = ft_range(3, 7);
    int size = 7 - 3;
    int i;

    if (range == NULL)
    {
        printf("Invalid range or malloc failed\n");
        return 1;
    }

    for (i = 0; i < size; i++)
        printf("%d ", range[i]);
    printf("\n");

    free(range);
    return 0;
}*/
