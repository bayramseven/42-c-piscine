/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baseven <baseven@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 19:13:57 by baseven           #+#    #+#             */
/*   Updated: 2024/08/24 19:23:27 by baseven          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	h;

	h = 0;
	while (str[h] != '\0')
	{
		if ((str[h] >= 'a') && (str[h] <= 'z'))
			str[h] -= 'a' - 'A';
		h++;
	}
	return (str);
}