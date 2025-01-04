/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baseven <baseven@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:50:38 by baseven           #+#    #+#             */
/*   Updated: 2024/08/29 08:56:07 by baseven          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	b;

	i = 0;
	b = 0;
	while (dest[b] != '\0')
		b++;
	while (src[i] != '\0' && i < nb)
	{
		dest[b] = src[i];
		i++;
		b++;
	}
	dest[b] = '\0';
	return (dest);
}

#include <stdio.h>
int main()
{

    char dest[]="bAryam";
    char src[]="edatemir";

    printf( "sonuc = %s " , ft_strncat( dest, src, 4) );
    return(0);
}