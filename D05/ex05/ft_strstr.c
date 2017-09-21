/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prosnobl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 21:48:32 by prosnobl          #+#    #+#             */
/*   Updated: 2017/09/19 19:27:38 by prosnobl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int t;

	i = 0;
	j = 0;
	t = 0;
	while (to_find[t] != '\0')
		t++;
	if (t == 0)
		return (str);
	while (str[i] != '\0')
	{
		while (to_find[j] == str[i + j])
		{
			if (j == t - 1)
				return (str + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
