/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baseven <baseven@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:38:53 by baseven           #+#    #+#             */
/*   Updated: 2024/08/26 11:14:00 by baseven          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
int	main()
{
	
	int a;
	int b;
	int x;
	int y;

	a = 10;
	b = 5; 
	
	ft_div_mod( a, b, &x, &y);
	printf("%d\n", x);
	printf("%d",y);
}