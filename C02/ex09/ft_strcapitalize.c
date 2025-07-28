/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhayakk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 23:45:04 by akhayakk          #+#    #+#             */
/*   Updated: 2025/07/26 14:00:13 by akhayakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		if (new_word && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			new_word = 0;
		}
		else if (!new_word && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		else if ((str[i] < 'A' || str[i] > 'Z')
			&& (str[i] < 'a' || str[i] > 'z')
			&& (str[i] < '0' || str[i] > '9'))
			new_word = 1;
		else
			new_word = 0;
		i++;
	}
	return (str);
}
