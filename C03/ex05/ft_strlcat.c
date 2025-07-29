/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhayakk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:44:31 by akhayakk          #+#    #+#             */
/*   Updated: 2025/07/29 17:58:11 by akhayakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len1;
	unsigned int	len2;

	i = 0;
	j = 0;
	len1 = 0;
	len2 = 0;
	while (dest[len1])
		len1++;
	while (src[len2])
		len2++;
	if (len1 >= size)
		return (len2 + size);
	i = len1;
	while (i < (size - 1) && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (len1 + len2);
}
