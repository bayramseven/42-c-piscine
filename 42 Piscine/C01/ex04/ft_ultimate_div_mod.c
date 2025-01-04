/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baseven <baseven@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:12:51 by baseven           #+#    #+#             */
/*   Updated: 2024/08/26 11:43:24 by baseven          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	if (*b != 0)
	{
		div = *a / *b;
		mod = *a % *b;
		*a = div;
		*b = mod;
	}
}

#include <stdio.h>
int main()

{
	int a = 21;
	int b = 10;
	

	ft_ultimate_div_mod(&a, &b);
	printf("%d %d", a, b);
	
	return(0);
}
