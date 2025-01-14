/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baseven <baseven@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 15:12:33 by baseven           #+#    #+#             */
/*   Updated: 2024/08/24 19:23:10 by baseven          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (!((str[c] >= 'A' && str[c] <= 'Z') || (str[c] >= 'a'
					&& str[c] <= 'z')))
		{
			return (0);
		}
		c++;
	}
	return (1);
}
