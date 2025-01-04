/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baseven <baseven@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 19:09:40 by baseven           #+#    #+#             */
/*   Updated: 2024/08/24 19:23:16 by baseven          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	d;

	d = 0;
	while (str[d] != '\0')
	{
		if (str[d] < 'a' || str[d] > 'z')
			return (0);
		d++;
	}
	return (1);
}
