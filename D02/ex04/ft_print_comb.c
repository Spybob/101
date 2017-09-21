/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prosnobl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 14:23:01 by prosnobl          #+#    #+#             */
/*   Updated: 2017/09/12 21:28:56 by prosnobl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (a != 55)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int tableau[3];

	tableau[0] = 48;
	tableau[1] = 48;
	tableau[2] = 48;
	while (tableau[0] < 58)
	{
		tableau[1] = tableau[0] + 1;
		while (tableau[1] < 58)
		{
			tableau[2] = tableau[1] + 1;
			while (tableau[2] < 58)
			{
				if (tableau[0] < tableau[1] && tableau[1] < tableau[2])
				{
					print(tableau[0], tableau[1], tableau[2]);
				}
				tableau[2]++;
			}
			tableau[1]++;
		}
		tableau[0]++;
	}
}
