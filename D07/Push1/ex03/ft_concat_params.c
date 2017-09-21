/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prosnobl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 09:29:45 by prosnobl          #+#    #+#             */
/*   Updated: 2017/09/21 10:59:44 by prosnobl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count_char(int argc, char **argv)
{
	int i;
	int j;
	int k;

	i = 1;
	k = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			j++;
			k++;
		}
		i++;
	}
	return (k);
}

char	*ft_strcat(char *str, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		str[i + j] = src[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;
	int		j;

	j = 1;
	i = count_char(argc, argv);
	str = malloc(sizeof(char) * (i + argc));
	while (j < argc)
	{
		ft_strcat(str, argv[j]);
		if (j != argc - 1)
			ft_strcat(str, "\n");
		j++;
	}
	return (str);
}
