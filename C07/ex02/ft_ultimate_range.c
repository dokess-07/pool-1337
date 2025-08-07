/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhayakk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 14:04:07 by akhayakk          #+#    #+#             */
/*   Updated: 2025/08/03 14:13:17 by akhayakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = (int *)malloc(size * sizeof(int));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		(*range)[i] = (min + i);
		i++;
	}
	return (size);
}
/*#include <stdio.h>

int main(void)
{
    int *arr;
    int size;
    int i;

    size = ft_ultimate_range(&arr, 3, 8);
    if (size == -1)
    {
        printf("Memory allocation failed\n");
        return (1);
    }

    printf("Generated array: ");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    free(arr);
    return (0);
}
*/
