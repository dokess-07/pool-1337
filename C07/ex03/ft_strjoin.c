/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhayakk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 17:26:28 by akhayakk          #+#    #+#             */
/*   Updated: 2025/08/05 17:42:02 by akhayakk         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while(dest[i])
		i++;
	while(src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	total_size(int size, char **strs, char *sep)
{
	char *dest;
	int	i;
	int	total_len;


	i = 0;
	total_len = 0;
	if (size == 0)
	{
		dest = (char *)malloc(sizeof(char));
		dest[i] = '\0';
		return (dest);
	}
	while (strs[i])
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	total_len += ft_strlen(sep) * (size - 1);
	return (total_len + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	char *dest;
	int total_len;

	i = 0;
	total_len = total_size(size, strs, sep);
	dest = (char *)malloc(sizeof(char) * (total_len));
	if (!dest)
		return (NULL);
	while (i < size - 1 )
	{
		ft_strcat(dest,str[i]);
		ft_strcat(dest,sep);
		i++;
	}
	ft_strcat(dest,str[i]);
	return (dest);
}		
