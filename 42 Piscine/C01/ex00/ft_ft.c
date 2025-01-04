/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baseven <baseven@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 12:54:36 by baseven           #+#    #+#             */
/*   Updated: 2024/09/02 15:29:53 by baseven          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ft(int *nbr)																				// ilk önce bir int değişkeni ata. daha sonra fonksiyonu çağır. fonksiyonun parantezinin için mainde koyduğun değişkenin adını ver. daha sonra printf ile 
{
	char l;
	l = 'b';
	*l = 42;
}

#include <stdio.h>
int main()
{
int byram;

ft_ft(&byram);

printf("byramın değeri = %d ",byram);
	return(0);
}