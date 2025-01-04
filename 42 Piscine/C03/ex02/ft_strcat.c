/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baseven <baseven@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:33:27 by baseven           #+#    #+#             */
/*   Updated: 2024/08/29 08:52:54 by baseven          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (dest[b] != '\0')
	{
		b++;
	}
	while (src[a] != '\0')
	{
		dest[b] = src[a];
		b++;
		a++;
	}
	dest[b] = '\0';
	return (dest);
}

#include <stdio.h>
int main()
{

    char dest[]="bAryam";
    char src[]="ali";

    printf( "sonuc = %s " , ft_strcat( dest, src) );


    return(0);
}