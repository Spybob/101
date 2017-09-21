/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prosnobl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 17:34:06 by prosnobl          #+#    #+#             */
/*   Updated: 2017/09/19 19:39:20 by prosnobl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && (i + j) < size)
	{
		dest[i + j] = src[i];
		j++;
	}
	dest[i + j] = '\0';
	if (size < dest[i])
		return (size);
	else
	return (dest[i]);
}
