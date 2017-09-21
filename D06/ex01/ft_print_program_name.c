/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prosnobl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 14:02:14 by prosnobl          #+#    #+#             */
/*   Updated: 2017/09/20 12:57:24 by prosnobl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int j;

	(void)argc;
	j = 0;
	while (argv[0][j] != '\0')
	{
		ft_putchar(argv[0][j]);
		j++;
	}
	ft_putchar('\n');
	return (0);
}
