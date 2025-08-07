/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhayakk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 10:36:16 by akhayakk          #+#    #+#             */
/*   Updated: 2025/08/03 11:01:52 by akhayakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_sort_params(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	while (i < ac - 1)
	{
		j = 1;
		while (j < ac - i - 1)
		{
			if (ft_strcmp(av[j], av[j + 1]) > 0)
				swap(&av[j], &av[j + 1]);
			j++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	 ft_sort_params(ac, av);

	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			write(1, &av[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
