/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baseven <baseven@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 10:54:16 by baseven           #+#    #+#             */
/*   Updated: 2024/08/26 13:22:46 by baseven          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size) // size boyut demek
{
	int	temp;
	int	a;

	a = 0;
	while (a < (size / 2))
	{
		temp = tab[a];
		tab[a] = tab[size - 1 - a];
		tab[size - 1 - a] = temp;
		a++;
	}
}

int()
{

	

	
	return(0);
}