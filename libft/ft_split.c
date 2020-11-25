/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolivero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 10:21:36 by lolivero          #+#    #+#             */
/*   Updated: 2019/11/27 13:04:07 by lolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_countwords(char const *s, char c)
{
	int i;
	int words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			i++;
			continue ;
		}
		words++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (words);
}

static int		size_word(char const *s, char c, int i)
{
	int counter;

	while (s[i] == c && s[i])
		i++;
	counter = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (counter);
		counter++;
		i++;
	}
	return (counter);
}

static int		save_word(char *str, char const *s, char c, int i)
{
	int j;

	j = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			str[j] = '\0';
			return (i);
		}
		str[j] = s[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (i);
}

static char		**aux(char const *s, char c, int max)
{
	int		j;
	char	**tab;
	int		i;

	i = ft_countwords(s, c);
	if (!(tab = (char**)malloc(sizeof(char*) * (i + 1))))
		return (NULL);
	tab[i] = NULL;
	max = i;
	i = 0;
	j = 0;
	while (j < max)
	{
		if (!(tab[j] = malloc(sizeof(char) * (size_word(s, c, i) + 1))))
			return (NULL);
		i = save_word(tab[j], s, c, i);
		j++;
	}
	return (tab);
}

char			**ft_split(char const *s, char c)
{
	int max;

	if (s == NULL)
		return (NULL);
	max = 0;
	return (aux(s, c, max));
}
