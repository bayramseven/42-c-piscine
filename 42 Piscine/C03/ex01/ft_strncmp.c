/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baseven <baseven@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:56:15 by baseven           #+#    #+#             */
/*   Updated: 2024/08/29 08:46:50 by baseven          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n - 1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}


#include <stdio.h>
int main()
{

    char s1[]="bAryam";
    char s2[]="baryamadfg";

    printf( "sonuc = %d " , ft_strncmp( s1 , s2, 5) );


    return(0);
}
