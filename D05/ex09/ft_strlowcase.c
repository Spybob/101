/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prosnobl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 12:23:19 by prosnobl          #+#    #+#             */
/*   Updated: 2017/09/19 16:55:41 by prosnobl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (65 <= str[i] && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}