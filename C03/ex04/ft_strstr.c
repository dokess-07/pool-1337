/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhayakk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:13:00 by akhayakk          #+#    #+#             */
/*   Updated: 2025/07/29 15:47:17 by akhayakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i])
	{
		while (to_find[j] && to_find[j] == str[i + j])
		{
			j++;
		}	
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}
