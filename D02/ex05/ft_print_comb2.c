/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prosnobl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 09:01:22 by prosnobl          #+#    #+#             */
/*   Updated: 2017/09/12 21:30:08 by prosnobl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print(char a, char b, char c, char d)
{
	if (((a * 10) + b) < ((c * 10) + d))
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(' ');
		ft_putchar(c);
		ft_putchar(d);
		if (!(a == 57 && b == 56 && c == 57 && d == 57))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb2(void)
{
	int t[4];

	t[0] = 48;
	while (t[0] < 58)
	{
		t[1] = 48;
		while (t[1] < 58)
		{
			t[2] = 48;
			while (t[2] < 58)
			{
				t[3] = 48;
				while (t[3] < 58)
				{
					print(t[0], t[1], t[2], t[3]);
					t[3]++;
				}
				t[2]++;
			}
			t[1]++;
		}
		t[0]++;
	}
}
