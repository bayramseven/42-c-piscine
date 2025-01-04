/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baseven <baseven@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 14:49:33 by baseven           #+#    #+#             */
/*   Updated: 2024/08/29 15:34:42 by baseven          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	x;

	x = 48; 
	while (x <= 57)
	{
		write (1, &x, 1);
		x++;
	}
}
int main()
{
	ft_print_numbers();
	return(0);
}