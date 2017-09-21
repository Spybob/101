/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prosnobl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 14:41:31 by prosnobl          #+#    #+#             */
/*   Updated: 2017/09/13 16:26:21 by prosnobl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int resultat;
	int i;

	resultat = 1;
	i = 1;
	if (nb == 0)
		return (1);
	else if (nb < 0 || nb >= 13)
		return (0);
	while (i <= nb)
	{
		resultat = i * resultat;
		i++;
	}
	return (resultat);
}
