/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prosnobl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 09:25:35 by prosnobl          #+#    #+#             */
/*   Updated: 2017/09/21 09:28:27 by prosnobl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int*ft_range(int min, int max)
{
	int i;
	int *tabl;

	i = 0;
	if (min >= max)
	{
		tabl = malloc(sizeof(int));
		tabl = NULL;
	}
	else
	{
		tabl = malloc(sizeof(int) * (max - min));
		while (min + i < max)
		{
			tabl[i] = min + i;
			i++;
		}
	}
	return (tabl);
}
