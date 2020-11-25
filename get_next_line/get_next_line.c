/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconde-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 08:17:52 by gconde-m          #+#    #+#             */
/*   Updated: 2019/12/04 15:43:04 by lolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_del(char *ptr)
{
	if (ptr)
	{
		free(ptr);
		ptr = NULL;
	}
	return (ptr);
}

static char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char*)s);
		else
			s++;
	}
	if (*s == c)
		return ((char*)s);
	else
		return (NULL);
}

static int	ft_return(int len, char **line)
{
	if (len < 0)
		return (-1);
	*line = ft_strdup("");
	return (0);
}

static char	*ft_line(char *aux, char **line, int *len)
{
	int		pos;
	char	*change;

	pos = 0;
	while (aux[pos] != '\n' && aux[pos] != '\0')
		pos++;
	if (aux[pos] == '\n')
	{
		*line = ft_substr(aux, pos);
		change = ft_strdup(aux + (pos + 1));
		free(aux);
		aux = change;
		if (aux[0] == '\0')
			aux = ft_del(aux);
		*len = 1;
	}
	else
	{
		*line = ft_strdup(aux);
		free(aux);
		aux = NULL;
		*len = 0;
	}
	return (aux);
}

int			get_next_line(int fd, char **line)
{
	char		*buff;
	int			len;
	static char	*aux[4096];

	if (fd < 0 || line == NULL || BUFFER_SIZE < 1)
		return (-1);
	if (!(buff = malloc(sizeof(char) * (BUFFER_SIZE + 1))))
		return (-1);
	while ((len = read(fd, buff, BUFFER_SIZE)) > 0)
	{
		buff[len] = '\0';
		if (aux[fd] == NULL)
			aux[fd] = ft_strdup(buff);
		else
			aux[fd] = ft_strjoin(aux[fd], buff);
		if (ft_strchr(aux[fd], '\n'))
			break ;
	}
	free(buff);
	if ((len < 0) || (len == 0 && aux[fd] == NULL))
		return (ft_return(len, line));
	aux[fd] = ft_line(aux[fd], line, &len);
	return (len);
}
