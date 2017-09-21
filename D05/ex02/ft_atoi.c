/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prosnobl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 12:22:52 by prosnobl          #+#    #+#             */
/*   Updated: 2017/09/19 16:53:57 by prosnobl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int nb;
	int i;
	int negative;

	nb = 0;
	i = 0;
	negative = 0;
	while (str[i] != '\0' && (str[i] == '\n' || str[i] == '\t'
				|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r'
				|| str[i] == ' '))
		i++;
	if (str[i] == '-')
		negative = 1;
	if (str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
		i++;
	while (str[i] != '\0' && (str[i] >= 48 && str[i] <= 57))
	{
		nb = nb * 10;
		nb = nb + (str[i] - '0');
		i++;
	}
	if (negative == 1)
		return (-nb);
	else
		return (nb);
}
