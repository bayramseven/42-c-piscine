/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boarslan <boarslan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 17:39:35 by boarslan          #+#    #+#             */
/*   Updated: 2024/08/18 17:40:00 by boarslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int length, char firstchar, char middlechar, char lastchar)
{
	int	charcounter;

	charcounter = 1;
	while (charcounter <= length)
	{
		if (charcounter == 1)
			ft_putchar(firstchar);
		else if (charcounter == length)
			ft_putchar(lastchar);
		else
			ft_putchar(middlechar);
		charcounter++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	rowcounter;

	rowcounter = 1;
	if (x >= 1 && y >= 1)
	{
		while (rowcounter <= y)
		{
			if (rowcounter == 1)
				ft_print(x, 'A', 'B', 'A');
			else if (rowcounter == y)
				ft_print(x, 'C', 'B', 'C');
			else
				ft_print(x, 'B', ' ', 'B');
			rowcounter++;
		}
	}
}
