/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhayakk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 09:56:42 by akhayakk          #+#    #+#             */
/*   Updated: 2025/08/03 14:30:21 by akhayakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int			i;
	int			size;
	char		*dup;

	i = 0;
	size = ft_strlen(src);
	dup = (char *)malloc((size + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*int main(void)
{
    char *original = "Hello, world!";
    char *copy = ft_strdup(original);

    if (copy == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Original: %s\n", original);
    printf("Copy: %s\n", copy);

    free(copy);
    return 0;
}*/
