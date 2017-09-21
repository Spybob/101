/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prosnobl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 09:33:32 by prosnobl          #+#    #+#             */
/*   Updated: 2017/09/21 09:40:08 by prosnobl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count_words(char *str)
{
	int i;
	int c;

	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && str[i] > 32 && str[i] != 127)
			c++;
		else if ((str[i - 1] == 32 || str[i - 1] == '\t'
					|| str[i - 1] == '\n') && str[i] > 32)
			c++;
		i++;
	}
	return (c);
}

int		count_char(int i, char *str)
{
	int tot;

	tot = 0;
	while ((str[i] == 32 || str[i] == '\t'
				|| str[i] == '\n') && str[i] != '\0')
		i++;
	while (str[i] != 32 && str[i] != '\t'
			&& str[i] != '\n' && str[i] != '\0')
	{
		i++;
		tot++;
	}
	return (tot);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		c;
	int		tmp;
	int		d;
	char	**list;

	i = 0;
	tmp = count_words(str);
	list = malloc(sizeof(char *) * (tmp + 1));
	c = 0;
	while (c < tmp && str[i])
	{
		d = 0;
		list[c] = malloc(sizeof(char) * (1 + count_char(i, str)));
		while ((str[i] == 32 || str[i] == '\t'
					|| str[i] == '\n') && str[i] != '\0')
			i++;
		while (str[i] != 32 && str[i] != '\t' &&
				str[i] != '\n' && str[i] != '\0')
			list[c][d++] = str[i++];
		list[c][d] = '\0';
		c++;
	}
	list[c] = NULL;
	return (list);
}
