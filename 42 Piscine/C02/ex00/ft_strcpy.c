/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baseven <baseven@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:43:46 by baseven           #+#    #+#             */
/*   Updated: 2024/08/26 15:42:53 by baseven          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
char	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (*dest);
}

int main()
{
 
char dest[]="byram";
char src[]="bigboss";

ft_strcpy(dest , src);
printf("bibo= %s" ,dest);
	
	return(0);
}



int main()
{
	char dest[]="bayram";
	char src[]="hilal";
	ft_strcpy(dest,src);
	printf("%s", dest);
	
	return(0);
	
}

